class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int> mp;

        for(char c : s)
            mp[c]++;

        for(char c : t)
            mp[c]--;

        for(auto x : mp) {
            if(x.second != 0)
                return x.first;
        }

        return '\0';
    }
};