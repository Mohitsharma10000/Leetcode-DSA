class Solution {
public:
    void reverseString(vector<char>& s) {
        int pos=0;
        string st="";
        for(int i=s.size()-1;i>=0;i--){
            st+=s[i];

        }
        for(int i=0;i<st.length();i++){
            s[pos++]=st[i];

        }
        
    }
};