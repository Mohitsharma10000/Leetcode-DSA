class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> row;
        long long prev = 1;  // C(n,0) = 1
        row.push_back(1);

        for(int k = 1; k <= rowIndex; k++){
            long long curr = prev * (rowIndex - k + 1) / k;
            row.push_back(curr);
            prev = curr;
        }

        return row;
    }
};