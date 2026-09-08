class Solution {
public:
    string minWindow(string s, string t) {
        
        if(s.length()<t.length()) return "";
        unordered_map<char,int>need,window;
        for(char c:t){
            need[c]++;
        }
        int left=0,ans=INT_MAX,required=need.size(),formed=0,minstart=0;
        for(int right=0;right<s.length();right++){
            char c=s[right];
            window[s[right]]++;
            if(need.count(c)&&window[c]==need[c]) formed++;
            while(formed==required){
                if(right-left+1<ans){
                    ans=right-left+1;
                    minstart=left;
                }
                char st=s[left];
                window[s[left]]--;
                if(need.count(st)&&window[st]<need[st]) formed--;
                left++;
            }
        }
        if(ans==INT_MAX) return "";
        return s.substr(minstart,ans);
        
        
        
    }
};