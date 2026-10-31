class Solution {
public:
    string removeTrailingZeros(string num) {
        string st=""; int last=0,first=0;
        bool trailing=true;
        for(int i=num.length()-1;i>=0;i--){
            if(num[i]!='0'){
                trailing=false;
                break;
            }
            if(num[i]=='0'&&trailing){
                last++;
                
            }
        }
       
        for(int i=0;i<num.length()-last;i++){
            st+=num[i];
        }
        return st;
        
    }
};