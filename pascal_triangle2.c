/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getRow(int rowIndex, int* returnSize) {
    
    int k = rowIndex;
    int *ans = (int *)calloc(k + 1, sizeof(int));
    int i, j;
    int prev = 0, cur = 0;
    ans[0] = 1;
    for (i = 1; i < k + 1; i++) {
        prev = ans[0];
        for (j = 1; j < i; j++) {
            cur = ans[j];
            ans[j] += prev;
            prev = cur;
        }
        ans[i] = 1;
    }
    *returnSize=rowIndex+1;
    return ans;

    
}