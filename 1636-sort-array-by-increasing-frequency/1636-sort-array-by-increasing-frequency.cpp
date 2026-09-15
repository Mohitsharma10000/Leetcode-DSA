class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        map<int, int> freq;

        
        for (int x : nums) {
            freq[x]++;
        }

        
        vector<pair<int, int>> v(freq.begin(), freq.end());

        
        sort(v.begin(), v.end(), [](auto &a, auto &b) {
            if (a.second == b.second)
                return a.first > b.first;   

            return a.second < b.second;   
        });

        
        vector<int> ans;

        for (auto x : v) {
            for (int i = 0; i < x.second; i++) {
                ans.push_back(x.first);
            }
        }

        return ans;
    }
};