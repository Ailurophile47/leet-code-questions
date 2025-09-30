class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int high=*max_element(nums.begin(),nums.end());
        int low=1,mid;
        int n=nums.size(),sum,res;
        while(low<=high){
            mid=(low+high)/2;
            sum=0;
            for(int i=0;i<n;i++){
                sum+=(nums[i]+mid-1)/mid;
            }
            if(sum<=threshold){
                res=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
    return res;
    }
};