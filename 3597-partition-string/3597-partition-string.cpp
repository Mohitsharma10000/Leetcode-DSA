class Solution {
public:
    vector<string> partitionString(string s) {
        unordered_map<string, int> mp;
        vector<string> arr;
        string st = "";
        int i = 0;

        while (i < s.length()) {
            st += s[i];

            if (mp.find(st) == mp.end()) {
                arr.push_back(st);
                mp[st]++;
                st = "";
            }

            i++;
        }

        return arr;
    }
};