class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int index1=0,index2=0;
        string s1="",s2="";
        for(int i=0;i<s.length();i++){
            if(s[i]=='#'){
                if(!s1.empty())
                s1.pop_back();
                continue;
            }
            s1+=s[i];


        }
        for(int i=0;i<t.length();i++){
            if(t[i]=='#'){
                if(!s2.empty())
                s2.pop_back();
                continue;
            }
            s2+=t[i];


        }
        return s1==s2;
        
    }
};