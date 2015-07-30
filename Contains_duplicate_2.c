bool containsNearbyDuplicate(int* nums, int numsSize, int k) {
    int i,j,t;
    if(numsSize==0||numsSize==1)
    return false;
    for(i=0;i<numsSize-1;i++)
    {
        t=i+k;
        if (t>numsSize) 
            t=numsSize-1;
        for (j=t; j>i; j--) 
            if (nums[i]==nums[j]&&i!=j) 
                return true; 
    }
    return false;
}
