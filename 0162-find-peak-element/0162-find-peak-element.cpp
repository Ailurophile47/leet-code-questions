class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int l = 0, h = nums.size() - 1;
        while (l < h) {
            int m = (l + h) / 2;
            if (nums[m] < nums[m + 1]) {
                l = m + 1; // max is on right
            } else {
                h = m;     // max is at m or left
            }
        }
        return l; // l == h → max element
    }
};
