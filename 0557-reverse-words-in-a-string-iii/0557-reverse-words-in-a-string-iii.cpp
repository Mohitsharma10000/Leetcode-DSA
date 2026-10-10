class Solution {
public:
    string reverseWords(string s) {
        vector<string> arr;
        string word = "";
        for (int i = 0; i < s.length(); i++) {
            if (s[i] != ' ')
                word += s[i];
            else {
                arr.push_back(word);
                word = "";
            }
        }
        arr.push_back(word);
        string st = "";
        for (int i = 0; i < arr.size(); i++) {
            for (int j = arr[i].length() - 1; j >= 0; j--) {
                st += arr[i][j];
            }
            if(i != arr.size() - 1)
                st += " ";
        }
        return st;
    }
};