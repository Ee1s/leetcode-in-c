/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
*/
int mixhigh(struct TreeNode* root)
{
    if(!root)
    return 0;
    int ld,rd;
    ld=mixhigh(root->left)+1;
    rd=mixhigh(root->right)+1;
    return ld>rd?ld:rd;
}
bool isBalanced(struct TreeNode* root) {
    if(!root)
    return true;
    int ld,rd;
    ld=mixhigh(root->left)+1;
    rd=mixhigh(root->right)+1;
    
    if(abs(ld-rd)<=1)
    { 
        if(isBalanced(root->left)&&isBalanced(root->right))
           return true;
        else return false;
        
    }
        else return false;
}