#include <stdio.h>

// Function to compute GCD
int gcd(int x, int y) {
    return y == 0 ? x : gcd(y, x % y);
}

// Function to compute LCM
long long lcm(long long x, long long y) {
    return (x / gcd(x, y)) * y;
}

int countUglyNumbers(long long num, int a, int b, int c) {
    return (num / a) + (num / b) + (num / c) 
         - (num / lcm(a, b)) - (num / lcm(b, c)) - (num / lcm(a, c)) 
         + (num / lcm(a, lcm(b, c)));
}

int nthUglyNumber(int n, int a, int b, int c) {
    long long left = 1, right = 2e9, ans = 0;
    
    while (left <= right) {
        long long mid = left + (right - left) / 2;
        if (countUglyNumbers(mid, a, b, c) >= n) {
            ans = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return (int)ans;
}