class Solution {
public:
    vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
        map<int, int> m;

        // Store maximum beauty for each price
        for (auto &a : items) {
            m[a[0]] = max(m[a[0]], a[1]);
        }

        // Precompute max beauty for prices ≤ current price
        int max_beauty = 0;
        for (auto &a : m) {
            max_beauty = max(max_beauty, a.second);
            a.second = max_beauty;
        }

        // Answer queries
        vector<int> ans;
        for (int q : queries) {
            auto it = m.upper_bound(q);
            if (it == m.begin()) {
                ans.push_back(0);  // No valid price found
            } else {
                it--;  // Move to the largest price ≤ q
                ans.push_back(it->second);
            }
        }
        return ans;
    }
};