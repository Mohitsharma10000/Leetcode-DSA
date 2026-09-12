class Solution {
public:
    vector<int> evenOddBit(int n) {
        string st="";
        int even=0,odd=0;
        while(n>0){
            st+=(n%2)+'0';
            n/=2;

        }
        
        for(int i=0;i<st.length();i++){
            if(st[i]=='1'){
                if(i%2==0) even++;
                else odd++;
            }
        }
        return {even,odd};
        
    }
};