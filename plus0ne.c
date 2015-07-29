/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int i;
    int count=1;
    int *digits1;
    for(i=digitsSize-1;i>=0;i--)
    {
        int a = digits[i] + count;
        digits[i] = a % 10;
        count = a / 10;
        if(count==0)
        break;
    }
    if(count==1)
    {
        digitsSize++;
        digits1 =(int*)malloc(sizeof(int)*digitsSize);
        for (i=digitsSize-2; i>=0; i--)
            
            digits1[i+1]=digits[i];
        
        digits1[0]=1;
        *returnSize=digitsSize;
        return digits1;
    }
    else{
        *returnSize=digitsSize;
        return digits;
       
    }
}