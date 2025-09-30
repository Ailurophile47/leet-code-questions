class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int missingCount = 0;
        int current = 1;
        int idx = 0;

        while (true) {
            if (idx < arr.size() && arr[idx] == current) {
                idx++;  // number is present in arr
            } else {
                missingCount++;
                if (missingCount == k) {
                    return current;
                }
            }
            current++;
        }
    }
};
