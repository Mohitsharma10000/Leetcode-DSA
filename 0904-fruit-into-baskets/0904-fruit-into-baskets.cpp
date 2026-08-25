class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int left = 0, maxlen = 0;
        unordered_map<int, int> mp;
        int sum = 0;
        for (int right = 0; right < fruits.size(); right++) {
            mp[fruits[right]]++;
            while (mp.size() > 2) {

                mp[fruits[left]]--;
                sum = sum - 1;
                if (mp[fruits[left]] == 0) {
                    mp.erase(fruits[left]);
                }
                left++;
            }
            sum += 1;
            maxlen = max(maxlen, sum);
        }
        return maxlen;
    }
};