int compar(const void *a,const void *b){
    return *(int*)a - *(int*)b;
}

bool containsDuplicate(int* nums, int numsSize) {
    qsort(nums, numsSize, sizeof(int),compar);
    int i ;
    for(i=1;i<numsSize;i++){
        if(nums[i-1]==nums[i]) return true;
    }
    return false;
}