class Solution {
public:
using node=TreeNode;
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        //taking queue
        queue<node* >q;
        if(root==NULL)
        return ans;
        q.push(root);

        while(!q.empty())
        {
            //take a level vector
            vector<int>level;
            int s=q.size();
            for(int i=0;i<s;i++)
            {
                node* curr=q.front();
                q.pop();
                if(curr->left)
                q.push(curr->left);
                if(curr->right)
                q.push(curr->right);
                level.push_back(curr->val);
            }
            ans.push_back(level);
        }
        return ans;
    }
};