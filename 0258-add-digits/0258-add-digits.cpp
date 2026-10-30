class Solution {
public:
    int addDigits(int num) {
        int x=num;
        while(x>=10){
            int y=x;
            int z=0;
            while(y!=0){
            z+=y%10;
            y/=10;}
            x=z;
        }
        return x;
        
    }
};