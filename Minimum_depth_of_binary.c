/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int minDepth(struct TreeNode* root) 
{
    int ld,rd;
    if(!root)
    return 0;
    if(root->left && root->right)
    {
         ld = minDepth(root->left)+1;
         rd = minDepth(root->right)+1;
        return ld<rd ? ld:rd;
    }
    
    if(!root->right)//&&!root->right)
    return minDepth(root->left)+1;
    if(!root->left)//&&root->right)
    return minDepth(root->right)+1;
}