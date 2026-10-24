class Solution {
public:
    string reverseOnlyLetters(string s) {
        int f=0,l=s.length()-1;
        
        while(f<l){
            if(!isalpha(s[f])){
                f++;
                continue;
                
            }
            if(!isalpha(s[l])){
                l--;
                continue;
                
            }
            swap(s[f],s[l]);
            f++;
            l--;
            
        }
        
        return s;
        
    }
};