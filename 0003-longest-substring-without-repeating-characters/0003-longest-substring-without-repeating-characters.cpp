class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> window;
        int left=0,maxlen=0;
        for(int i=0;i<s.length();i++){
            while(window.count(s[i])){
                window.erase(s[left]);
                left++;
            }
            window.insert(s[i]);
            maxlen=max(maxlen,i-left+1);
        }
        return maxlen;

    }
};
