class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        const int MOD = 1000000007;
        int n = arr.size();
        long long result = 0;

        stack<int> st;

        for (int i = 0; i <= n; i++) {
            while (!st.empty() && (i == n || arr[st.top()] >= arr[i])) {
                int mid = st.top();
                st.pop();

                int left = st.empty() ? mid + 1 : mid - st.top();
                int right = i - mid;

                result = (result + (long long)arr[mid] * left * right) % MOD;
            }
            st.push(i);
        }

        return (int)result;
    }
};