class Solution {
public:
    int strStr(string haystack, string needle) {
        int left=0,right=needle.length()-1;
        int index=-1;
        while(right<haystack.length()){
            string st="";
            for(int i=left;i<=right;i++){
                st+=haystack[i];
            }
            if(st==needle){
                index=left;
                break;
            }
            left++;
            right++;
        }
        return index;
        
    }
};