int findMaxConsecutiveOnes(int* nums, int numsSize) 
{
    int i,c=0,mc=0;
    for(i=0;i<numsSize;i++)
    {
        if(nums[i]==1)
        {
            c++;
            mc = c>mc ? c:mc;
        }
        else
            c=0;
    }
    return mc;
}