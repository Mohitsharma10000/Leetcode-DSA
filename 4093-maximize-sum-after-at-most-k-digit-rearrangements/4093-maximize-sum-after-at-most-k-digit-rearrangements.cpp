
class Solution {
public:
    long long maximizeSum(vector<int>& nums, int k) {
        long long sum = 0;
        vector<pair<int, int>> arr;

        for (int i = 0; i < nums.size(); i++) {
            string st = to_string(nums[i]);
            sort(st.rbegin(), st.rend());

            int x = stoi(st);
            sum += nums[i];

            arr.push_back({x - nums[i], i});
        }

        sort(arr.rbegin(), arr.rend());

        for (int i = 0; i < min(k, (int)arr.size()); i++) {
            int index = arr[i].second;
            int x = nums[index];

            string st = to_string(x);
            sort(st.rbegin(), st.rend());

            sum += stoi(st) - x;
        }

        return sum;
    }
};
