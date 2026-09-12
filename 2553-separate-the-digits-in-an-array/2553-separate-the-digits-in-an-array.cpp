class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>ans;
        string st="";
        for(int i=0;i<nums.size();i++){
            st+=to_string(nums[i]);

        }
        for(int i=0;i<st.length();i++){
            ans.push_back(st[i]-'0');
        }
        return ans;
        
    }
};