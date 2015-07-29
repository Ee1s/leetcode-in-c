int removeElement(int* nums, int numsSize, int val) {
    int i,j=0;
    for(i=0;i<numsSize;i++)
    {
        if(nums[i]==val)
        continue;
        nums[j]=nums[i];
        j++;
        
    }
        

    return j;
}