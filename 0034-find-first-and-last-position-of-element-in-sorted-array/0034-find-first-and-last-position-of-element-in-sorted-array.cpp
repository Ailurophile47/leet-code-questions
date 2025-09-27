class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        int n = nums.size();
        int first = -1, last = -1;
        int l = 0, h = n - 1;

        // Find first occurrence
        while (l <= h) 
        {
            int m = (l + h) / 2;
            if (nums[m] == target) {
                first = m;
                h = m - 1; // keep searching left
            } 
            else if (nums[m] < target) {
                l = m + 1;
            } 
            else {
                h = m - 1;
            }
        }

        // Find last occurrence
        l = 0; h = n - 1;
        while (l <= h) 
        {
            int m = (l + h) / 2;
            if (nums[m] == target) {
                last = m;
                l = m + 1; // keep searching right
            } 
            else if (nums[m] < target) {
                l = m + 1;
            } 
            else {
                h = m - 1;
            }
        }

        return {first, last};
    }
};
