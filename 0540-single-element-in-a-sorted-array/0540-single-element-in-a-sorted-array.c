int singleNonDuplicate(int* nums, int numsSize) {
    int l = 0, r = numsSize - 1;
    
    while (l < r) {
        int m = l + (r - l) / 2;
        
        // Ensure m is even (so it always points to the first element of a pair)
        if (m % 2 == 1) m--;
        
        if (nums[m] == nums[m + 1]) {
            // Unique element is in the right half
            l = m + 2;
        } else {
            // Unique element is in the left half (including m)
            r = m;
        }
    }
    
    return nums[l];
}
