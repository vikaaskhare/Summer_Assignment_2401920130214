    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) 
    {
        
       // path doesnt have p, q
        if(root == nullptr)
        {
            return nullptr;
        }
        
        //path has p
        if(root->val == p->val)
        {
            return root;
        }
        // path has q
         if(root->val == q->val)
        {
            return root;
        }
        int maxVal = p->val > q->val ? p->val: q->val;
        int minVal = p->val < q->val ? p->val: q->val;
        
       // search in left subtree 
        if(root->val > maxVal)
        {
            return lowestCommonAncestor(root->left, p, q) ;
        }
        // search in right subtree 
        else if (root->val < minVal)
        {
            return lowestCommonAncestor(root->right, p, q);
            
        }
        // path has both p and q
        else if (root->val > minVal < maxVal)
        {
            return root;
        }
        return nullptr;
    
    }