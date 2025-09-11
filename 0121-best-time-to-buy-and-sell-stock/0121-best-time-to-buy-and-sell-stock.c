int maxProfit(int* prices, int pricesSize) {
    int minPrice = INT_MAX;  // Track the lowest price seen so far
    int maxProfit = 0;       // Track the highest profit seen so far

    for (int i = 0; i < pricesSize; i++) {
        if (prices[i] < minPrice) {
            minPrice = prices[i];      // Update min price
        } else if (prices[i] - minPrice > maxProfit) {
            maxProfit = prices[i] - minPrice; // Update profit
        }
    }
    return maxProfit;
}