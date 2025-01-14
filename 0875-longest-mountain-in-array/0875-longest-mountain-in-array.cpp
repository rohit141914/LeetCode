class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int l = arr.size();
        if (l < 3) {
            return 0; // A mountain requires at least 3 elements
        }

        bool start = false; // Indicates if we are in a mountain
        bool up = false;    // Indicates if we are climbing up
        int c = 0;          // Current mountain length
        int ans = 0;        // Maximum mountain length

        for (int i = 1; i < l; i++) {
            if (arr[i] > arr[i - 1]) {
                // Start or continue climbing up
                if (!start || !up) {
                    // Start a new mountain
                    start = true;
                    up = true;
                    c = 2; // Initialize the count
                } else {
                    c++;
                }
            } else if (arr[i] < arr[i - 1]) {
                // Going downhill
                if (start && up) {
                    // Valid downhill after uphill
                    up = false;
                    c++;
                    ans = max(ans, c); // Update max length
                } else if (start) {
                    // Continue the downhill
                    c++;
                    ans = max(ans, c);
                } else {
                    // No uphill before downhill, reset
                    start = false;
                    c = 0;
                }
            } else {
                // Plateau, reset everything
                start = false;
                up = false;
                c = 0;
            }
        }

        return ans;
    }
};
