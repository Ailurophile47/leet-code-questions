#include <stdbool.h>

bool isPowerOfTwo(int n) {
    // Handle edge cases where n is less than 1
    if (n < 1)
        return false;

    // Base case: if n is 1, it's a power of two
    if (n == 1)
        return true;

    // Check if n is divisible by 2
    if (n % 2 != 0)
        return false;

    // Recursively check for n / 2
    return isPowerOfTwo(n / 2);
}
