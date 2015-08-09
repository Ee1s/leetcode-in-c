/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *columnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */

int  p4th(struct TreeNode* root, int sum,int curSum,int top,int count,int **b,int **columnSizes,int c[])
{
    
    if (!root)
    {
        return 0;
    }
    b[count][top++]=root->val;
    
    if(!root->right&&!root->left)
    {
       // int i=0;
        if(sum==curSum)
        {
            
            c[count]=top;
            count ++;
            return count;
        }
        
    }
    else return p4th(root->left,sum-root->val,curSum,top,count,b,columnSizes,c)
        ||p4th(root->right,sum-root->val,curSum,top,count,b,columnSizes,c);
   // return count;
}
int** pathSum(struct TreeNode* root, int sum, int** columnSizes, int* returnSize) {
    int count =0;
    int curSum=0;
    int top=0;
    int **a;
    int b[500][500];
    int c[50];
    //*columnSizes = (int *)malloc(sizeof(int*) * numRows);
    p4th(root,sum,curSum,top,count,(int **)b,columnSizes,c);
    *returnSize=count;
    *columnSizes = (int *)malloc(sizeof(int*) * count);
    
    a = (int **)malloc(sizeof(int*)*count);
    int i ,j;
    for ( i = 0; i < count; i++)
    {
        a[i]=(int*)malloc(sizeof(int)*c[i]);
        columnSizes[0][i]=c[i];
        for ( j = 0; j < c[i]; j++)
        {
            a[i][j]=b[i][j];
        }
    }
    
    if (count==0)
    {
        return 0;
    }
    return a;
    
}
