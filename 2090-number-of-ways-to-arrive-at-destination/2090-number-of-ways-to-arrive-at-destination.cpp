class Solution {
public:
    int countPaths(int n, vector<vector<int>>& roads) {
        const int MOD = 1e9 + 7;

        vector<vector<pair<int, int>>> graph(n);
        for (auto& road : roads) {
            int startNode = road[0], endNode = road[1], travelTime = road[2];
            graph[startNode].emplace_back(endNode, travelTime);
            graph[endNode].emplace_back(startNode, travelTime);
        }

        priority_queue<pair<long long, int>, vector<pair<long long, int>>,
                       greater<>>
            minHeap;

        // Store shortest time to each node
        vector<long long> shortestTime(n, LLONG_MAX);
        vector<int> pathCount(n, 0);

        shortestTime[0] = 0;  // Distance to source is 0
        pathCount[0] = 1;     // 1 way to reach node 0

        minHeap.emplace(0, 0);  // {time, node}

        while (!minHeap.empty()) {
            long long currTime = minHeap.top().first;  // Current shortest time
            int currNode = minHeap.top().second;
            minHeap.pop();

            if (currTime > shortestTime[currNode]) continue;

            for (auto& [neighborNode, roadTime] : graph[currNode]) {
          
                if (currTime + roadTime < shortestTime[neighborNode]) {
                    shortestTime[neighborNode] = currTime + roadTime;
                    pathCount[neighborNode] = pathCount[currNode];
                    minHeap.emplace(shortestTime[neighborNode], neighborNode);
                }
          
                else if (currTime + roadTime == shortestTime[neighborNode]) {
                    pathCount[neighborNode] =
                        (pathCount[neighborNode] + pathCount[currNode]) % MOD;
                }
            }
        }

        return pathCount[n - 1];
    }
};