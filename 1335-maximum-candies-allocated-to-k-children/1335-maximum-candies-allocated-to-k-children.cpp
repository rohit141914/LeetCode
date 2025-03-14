class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
        // Find the maximum number of candies in any pile
        int maxCandiesInPile = 0;
        for (int i = 0; i < candies.size(); i++) {
            maxCandiesInPile = max(maxCandiesInPile, candies[i]);
        }

        int left = 0;
        int right = maxCandiesInPile;

        while (left < right) {
            int middle = (left + right + 1) / 2;

            if (canAllocateCandies(candies, k, middle)) {

                left = middle;
            } else {
                right = middle - 1;
            }
        }

        return left;
    }

private:
    bool canAllocateCandies(vector<int>& candies, long long k,
                            int numOfCandies) {
        // Initialize the total number of children that can be served
        long long int maxNumOfChildren = 0;

        for (int pileIndex = 0; pileIndex < candies.size(); pileIndex++) {
            maxNumOfChildren +=
                candies[pileIndex] /
                numOfCandies;  // Add the number of children this pile can serve
        }

        return maxNumOfChildren >= k;
    }
};