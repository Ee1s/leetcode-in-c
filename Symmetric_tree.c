/**
 * Definition for a binary tree node.
 * struct TreeNode   int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool em(struct TreeNode * left,struct TreeNode * right)
{
    if(!left&&!right)
    return true;
    if(right&&left
    &&left->val==right->val
    &&em(left->left,right->right)
    &&em(left->right,right->left))
    return true;
    else return false;
}
 
bool isSymmetric(struct TreeNode* root) 
{
    if(!root)
    return true;
    return em(root->left,root->right);
    
}
