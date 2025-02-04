#include <vector>
#include <algorithm>

class Solution {
public:
    int removeCoveredIntervals(std::vector<std::vector<int>>& intervals) {
        // Sort intervals by starting point, and by ending point in descending order if starting points are equal
        std::sort(intervals.begin(), intervals.end(), [](const std::vector<int>& a, const std::vector<int>& b) {
            return a[0] < b[0] || (a[0] == b[0] && a[1] > b[1]);
        });

        int count = 0;
        int end = 0;

        for (const auto& interval : intervals) {
            // If the current interval's end is greater than the last counted end, it's not covered
            if (interval[1] > end) {
                count++;
                end = interval[1]; // Update the end to the current interval's end
            }
        }

        return count;
    }
};
