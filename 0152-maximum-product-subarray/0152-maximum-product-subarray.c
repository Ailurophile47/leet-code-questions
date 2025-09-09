int maxProduct(int* nums, int numsSize) {
    int maxProd = nums[0];
    int minProd = nums[0];
    int result = nums[0];

    for (int i = 1; i < numsSize; i++) {
        int temp = maxProd;
        maxProd = fmax(nums[i], fmax(nums[i] * maxProd, nums[i] * minProd));
        minProd = fmin(nums[i], fmin(nums[i] * temp, nums[i] * minProd));
        result = fmax(result, maxProd);
    }
    return result;
}
