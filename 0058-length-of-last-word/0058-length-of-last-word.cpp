class Solution {
public:
    int lengthOfLastWord(string s) {
        int right=s.length()-1;
        int count=0;
        while(right>=0){
            if(count!=0){
                if(s[right]==' ') return count;
                else{
                    count++;
                    right--;
                }
            }
            if(count==0){
                if(s[right]==' ')right--; 
                 else {
                    count++;
                    right--;
                }
            }

        }
        return count;
        
    }
};