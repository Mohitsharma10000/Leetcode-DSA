class Solution {
public:
    int balancedString(string s) {
        int n=s.length();
        int target=n/4,minlen=n;
        unordered_map<char,int>freq;
        for(char ch:s){
            freq[ch]++;
        }
        bool balance=true;
        for(char c:{'Q','W','E','R'}){
            if(freq[c]>target) balance=false;
        }
        if(balance) return 0;
        int left=0;
        for(int right=0;right<n;right++){
            freq[s[right]]--;
            while(left<n&&freq['Q']<=target&&freq['W']<=target&&freq['E']<=target&&freq['R']<=target){
                minlen=min(minlen,right-left+1);
                freq[s[left++]]++;
            }



        }
        return minlen;
        
    }
};