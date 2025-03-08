class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        queue<char> blockQueue;
        int numWhites = 0;

        while (blockQueue.size() < k) {
            char currentChar = blocks[blockQueue.size()];
            if (currentChar == 'W') numWhites++;
            blockQueue.push(currentChar);
        }

        //  minimum
        int numRecolors = numWhites;
        for (int i = k; i < blocks.size(); i++) {
            if (blockQueue.front() == 'W') numWhites--;
            blockQueue.pop();

            if (blocks[i] == 'W') numWhites++;
            blockQueue.push(blocks[i]);

            // Update minimum
            numRecolors = min(numRecolors, numWhites);
        }
        return numRecolors;
    }
};