class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int>mpp;
        int cnt = 0;
        int sum = 0;
        mpp[0] = 1;
        for(int i = 0 ; i < nums.size() ; i++){
            sum += nums[i];

            int rem = sum - k;
            cnt = cnt + mpp[rem];
            mpp[sum] = mpp[sum] + 1;
        }
        return cnt;
    }
};