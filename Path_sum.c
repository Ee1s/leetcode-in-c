/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool hasPathSum(struct TreeNode* root, int sum) {
    if(!root)
    return false;
    int sum1=sum-root->val;
    if(!root->left&&!root->right&&sum1==0)
    return true;
    if(hasPathSum(root->left,sum1)||hasPathSum(root->right,sum1))
    return true;
    else
    return false;
    
}