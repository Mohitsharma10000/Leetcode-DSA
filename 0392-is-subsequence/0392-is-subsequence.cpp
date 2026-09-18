class Solution {
public:
    bool isSubsequence(string s, string t) {
        int left=0,right=0,count=0;
        while(left<s.length()&&right<t.length()){
            if(s[left]==t[right]){
                left++;
                right++;
                count++;
            }
            else right++;

            
        }
        if(count==s.length()) return true;
        else return false;
        
    }
};