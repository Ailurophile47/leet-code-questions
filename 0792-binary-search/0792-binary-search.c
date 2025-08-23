int search(int* nums, int numsSize, int target) {
    int low = 0;
    int high = numsSize - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (nums[mid] == target) {
            return mid;  // found
        } 
        else if (nums[mid] < target) {
            low = mid + 1;  // move right
        } 
        else {
            high = mid - 1; // move left
        }
    }

    return -1;  // not found
}
