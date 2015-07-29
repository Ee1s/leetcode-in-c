/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *columnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** generate(int numRows, int** columnSizes, int* returnSize) {
    int i;
    int j;
    int **array;
    
    *returnSize = numRows;
    *columnSizes = (int *)malloc(sizeof(int*) * numRows);
    array = (int **)malloc(sizeof(int*)*numRows);
    for(i=0; i<numRows; i++){
        columnSizes[0][i] = i+1;
        array[i] = (int*)malloc(sizeof(int)*(i+1));
        array[i][0] = 1;
        array[i][i] = 1;
    }
    
    for(i=1; i<numRows; i++){
        for(j=1; j<i; j++){
            array[i][j] =array[i-1][j]+array[i-1][j-1];
        }
    }
    return array;
}
    
