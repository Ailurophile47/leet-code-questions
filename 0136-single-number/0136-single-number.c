int singleNumber(int* nums, int numsSize) 
{
    int i,c=nums[0];
    for(i=1;i<numsSize;i++)
        c^=nums[i];
    return c;
}