class Solution {
public:
    void solve(unordered_map<int,string>& mp, vector<string>& arr,
               string& s, string& st, int i) {

        if(i == s.size()) {
            arr.push_back(st);
            return;
        }

        int num = s[i] - '0';

        for(int j = 0; j < mp[num].size(); j++) {
            st += mp[num][j];
            solve(mp, arr, s, st, i + 1);
            st.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {
        if(digits.empty()) return {};

        unordered_map<int,string> mp;
        mp[2] = "abc";
        mp[3] = "def";
        mp[4] = "ghi";
        mp[5] = "jkl";
        mp[6] = "mno";
        mp[7] = "pqrs";
        mp[8] = "tuv";
        mp[9] = "wxyz";

        vector<string> arr;
        string st = "";

        solve(mp, arr, digits, st, 0);

        return arr;
    }
};