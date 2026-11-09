class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector < pair<int, int>> arr;
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }
        for (auto x : mp) {
            arr.push_back({x.first, x.second});
        }
        sort(arr.begin(), arr.end(),
             [](auto& a, auto& b) { return a.second > b.second; });
        vector<int> ans;
        for (int i = 0; i < k; i++) {
            ans.push_back(arr[i].first);
        }
        return ans;
    }
};