int removeDuplicates(int* nums, int numsSize) {
    
    int i;
    int k=1;
    if(!numsSize)
        return 0;
    if (numsSize==1) return 1;
    int count=0;
    for(i=1;i<numsSize;i++)
    {
        
        if(nums[i]==nums[i-1])
        {
            count++;
            if (count<2)
            {
                nums[k]=nums[i];
                k++;
            }
        }
        else
        {
            count=0;
            nums[k]=nums[i];
            k++;
        }
        
    }
    return k;
}