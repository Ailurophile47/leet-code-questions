int missingNumber(int* nums, int numsSize) 
{
    int tosum=((numsSize)*(numsSize+1))/2;
    int s=0;
     for(int i=0;i<numsSize;i++)
    {
        s=s+nums[i];
    } 
    return tosum-s;  
}