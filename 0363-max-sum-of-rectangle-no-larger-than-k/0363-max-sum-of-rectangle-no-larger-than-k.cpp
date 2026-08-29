class Solution {
public:
    int maxSumSubmatrix(vector<vector<int>>& matrix, int k) {

        int rows = matrix.size();
        int cols = matrix[0].size();

        int ans = INT_MIN;

        // Make rows the smaller dimension
        if (rows > cols) {
            vector<vector<int>> temp(cols, vector<int>(rows));

            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < cols; j++) {
                    temp[j][i] = matrix[i][j];
                }
            }

            matrix = temp;
            swap(rows, cols);
        }

        // Fix top row
        for (int top = 0; top < rows; top++) {

            vector<int> colSum(cols, 0);

            // Fix bottom row
            for (int bottom = top; bottom < rows; bottom++) {

                // Convert rows [top...bottom] into 1D array
                for (int col = 0; col < cols; col++) {
                    colSum[col] += matrix[bottom][col];
                }

                // Find maximum subarray sum <= k
                set<int> prefixSet;

                prefixSet.insert(0);

                int prefixSum = 0;

                for (int col = 0; col < cols; col++) {

                    prefixSum += colSum[col];

                    // Find smallest previous prefix >= prefixSum - k
                    auto it = prefixSet.lower_bound(prefixSum - k);

                    if (it != prefixSet.end()) {
                        ans = max(ans, prefixSum - *it);
                    }

                    // Can't get better than k
                    if (ans == k) {
                        return k;
                    }

                    prefixSet.insert(prefixSum);
                }
            }
        }

        return ans;
    }
};