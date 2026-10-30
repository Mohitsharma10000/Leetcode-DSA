class Solution {
public:
    int countAsterisks(string s) {
        int count=0,ans=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='|'){
                if(count==0) count++;
                else count--;
            }
            if(s[i]=='*'){
                if(count>0) continue;
                else ans++;
            }
        }
        return ans;
        
    }
};