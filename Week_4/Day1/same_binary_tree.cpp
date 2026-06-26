class Solution {
public:
using node= TreeNode;

    bool isSameTree(TreeNode* p, TreeNode* q) {
        //base
       if (p == nullptr && q == nullptr)
       return true;

        // One is null and the other isn't
        if (p == nullptr || q == nullptr)
        return false;

        // Values differ
        if (p->val != q->val)
        return false;

        //is root same
         if(p->val!=q->val)return false;
        //is left tree same
        bool leftsame=isSameTree(p->left,q->left);
        bool rightsame=isSameTree(p->right,q->right);
       
       if(leftsame && rightsame)
       return true;
       return false;
    }
};