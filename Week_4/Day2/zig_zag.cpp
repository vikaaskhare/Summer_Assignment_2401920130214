class Solution {
public:
using node=TreeNode;
    void lot(node* root,int flag,vector <vector<int>>&ans)
    {
        //if flag=0 i.e left->right
        //if flag=1 i.e right->left
        if(root==NULL)
        return;
        queue <node*>q;
        q.push(root);
        
        while(!q.empty())
        {
            int size=q.size();
            vector<int>lvl;

            for(int i=0;i<size;i++)
            {
                node* curr=q.front();
                q.pop();
                lvl.push_back(curr->val);

                if(curr->left)
                q.push(curr->left);

                if(curr->right)
                q.push(curr->right);

            }
            if(flag)
            reverse(lvl.begin(),lvl.end());
            
            ans.push_back(lvl);
            flag=!flag;
        
        

            
        }
       
    }
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        //condition based level order traversal
        vector <vector<int>>ans;
        lot(root,0,ans);
        return ans;

    }
};