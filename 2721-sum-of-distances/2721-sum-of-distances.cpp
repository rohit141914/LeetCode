class Solution {
public:
    vector<long long> distance(vector<int>& nums) {
        unordered_map<int, vector<int>> mp;
        int n = nums.size();

        // Step 1: Group indices by the number
        for (int i = 0; i < n; i++) {
            mp[nums[i]].push_back(i);
        }

        vector<long long> ans(n, 0);

        // Step 2: Calculate the sum of distances for each group
        for (auto& [key, indices] : mp) {
            int size = indices.size();
            if (size == 1) continue;

            // Prefix sums to calculate distances
            vector<long long> prefixSum(size, 0);
            prefixSum[0] = indices[0];
            for (int i = 1; i < size; i++) {
                prefixSum[i] = prefixSum[i - 1] + indices[i];
            }

            for (int i = 0; i < size; i++) {
                long long leftSum = i > 0 ? prefixSum[i - 1] : 0;
                long long rightSum = prefixSum[size - 1] - prefixSum[i];
                ans[indices[i]] = (1LL * i * indices[i] - leftSum) + (rightSum - 1LL * (size - i - 1) * indices[i]);
            }
        }

        return ans;
    }
};
