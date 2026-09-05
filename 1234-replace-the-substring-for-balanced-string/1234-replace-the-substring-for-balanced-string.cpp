class Solution {
public:
    int balancedString(string s) {
        int n = s.size();
        int target = n / 4;
        unordered_map<char, int> freq;
        
       
        for (char c : s) freq[c]++;
        
      
        bool balanced = true;
        for (char c : {'Q','W','E','R'}) {
            if (freq[c] > target) balanced = false;
        }
        if (balanced) return 0;
        
        int left = 0, minLen = n;
        
        for (int right = 0; right < n; right++) {
            freq[s[right]]--;   

            while (left < n && freq['Q'] <= target && freq['W'] <= target && 
                   freq['E'] <= target && freq['R'] <= target) {
                minLen = min(minLen, right - left + 1);
                freq[s[left]]++;   
                left++;
            }
        }
        
        return minLen;
    }
};