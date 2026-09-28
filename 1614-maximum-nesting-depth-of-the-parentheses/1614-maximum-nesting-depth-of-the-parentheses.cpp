class Solution {
public:
    int maxDepth(string s) {
        int count=0;
        int n=s.length();
        int open=0,close=0,maxi=0;

        for(int i=0;i<n;i++){
            if(s[i]=='(') open++;
            if(s[i]==')') close++;
            if(close>0){ open=open-close;
            close=0;}
            maxi=max(maxi,open);
        }
        return maxi;

        
    }
};