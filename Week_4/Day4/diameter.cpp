class Solution {
public:
    using node=TreeNode;
    int ans=0;
    int height(node* root)
    {
        if(root==NULL)
        return 0;

        int leftheight=height(root->left);
        int rightheight=height(root->right);

        ans=max(ans,leftheight+rightheight);

        return 1 + max(leftheight,rightheight);
    }
     int diameterOfBinaryTree(TreeNode* root) {

        height(root);
        return ans;

    }

};