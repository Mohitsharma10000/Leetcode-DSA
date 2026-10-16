class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if(nums.size()<2) return 0;
        sort(nums.begin(),nums.end());
        int maxi=0;
        
        for(int i=1;i<nums.size();i++){
            int diff=abs(nums[i-1]-nums[i]);
            maxi=max(maxi,diff);

        }
        return maxi;
        
    }
};