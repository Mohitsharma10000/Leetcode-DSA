class Solution {
public:
    int minAddToMakeValid(string s) {
        int balance=0,answer=0;
        for(auto c:s){
            if(c=='(') balance++;
            else {
                if(balance==0) answer++;
                else balance--;
            }
        }
        int sum=balance+answer;
        return sum;


        
    }
};