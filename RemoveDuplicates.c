int removeDuplicates(int* nums, int numsSize) {
    
    int i;
    int k=0;
    if(!numsSize)
    return 0;
    for(i=0;i<numsSize-1;i++)
    {
        if(nums[i]!=nums[i+1]){
            nums[k]=nums[i];
            k++;
        }
        
    }
    return k;
}