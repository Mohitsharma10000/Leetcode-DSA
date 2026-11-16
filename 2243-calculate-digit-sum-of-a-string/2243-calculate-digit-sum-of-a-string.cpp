class Solution {
public:
    string digitSum(string s, int k) {
       
        string x="";
        while(s.length()>k){
             int count=0,sum=0;
            x="";
        for(int i=0;i<s.length();i++){
            if(count==k){
                x+=to_string(sum);
                sum=0;
                count=0;
            }
            sum+=s[i]-'0';
            count++;


        }
        x+=to_string(sum);
        s=x;
        }
        return s;

        
    }
};