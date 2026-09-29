class Solution {
public:
    string largestGoodInteger(string num) {
        string s1="";
        int maxi=-1;
        int left=0,right=2;
        while(right<num.length()){
            if(num[left]==num[left+1]&&num[left]==num[right]){
                s1+=num[left];
                s1+=num[left+1];
                s1+=num[right];
                maxi=max(maxi,stoi(s1));
                s1="";
            }
            left++;
            right++;
        }
        if(maxi==-1) return "";
        if(maxi==0) return "000";
        string ans=to_string(maxi);
        return ans;
    }
};