char* largestOddNumber(char* num) {
    int n = strlen(num);

    // Traverse from the end to find the last odd digit
    for (int i = n - 1; i >= 0; i--) {
        if ((num[i] - '0') % 2 == 1) {
            // Odd digit found, return substring [0..i]
            num[i+1] = '\0';  // truncate the string after odd digit
            return num;
        }
    }
    return "";  // no odd digit found
}