class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        string st = "";
        int n = sentence.length();
       
        vector<string> s;
        for (int i = 0; i < n; i++) {
            if (sentence[i] == ' ') {
                s.push_back(st);
                st = "";
            }
            else
            st += sentence[i];
        }
        s.push_back(st);
        for (int i = 0; i < s.size(); i++) {
             int left = 0;
            while (left < dictionary.size()) {
                if (s[i].length()> dictionary[left].length()&&s[i].substr(0,dictionary[left].length())==dictionary[left]) {
                    s[i] = dictionary[left];
                    
                }
                left++;
                
            }
        }
        string ans = "";
        for (int i = 0; i < s.size() - 1; i++) {
            ans += s[i];
            ans += " ";
        }
        ans += s[s.size() - 1];
        return ans;
    }
};