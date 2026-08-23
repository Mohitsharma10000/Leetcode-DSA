class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        
        vector<int>ans;
        vector<int>freq(26,0),freq2(26,0);
        int n=s.length();
        int m=p.length();
        if(m>n) return ans;
        int i;
        for( i=0;i<m;i++){
            freq[p[i]-'a']++;
            freq2[s[i]-'a']++;
        }
        if(freq==freq2) ans.push_back(i-m);
        for(int j=m;j<n;j++){
            freq2[s[j]-'a']++;
            freq2[s[j-m]-'a']--;
            if(freq==freq2) ans.push_back(j-m+1);
        }
        return ans;
        
        
    }
};