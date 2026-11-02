class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        long long mini=INT_MAX;
        if(n<2) return 0;
        for(int i=0;i<n;i++){
            long long ans=0;
            for(int j=0;j<n;j++){
                ans+=abs(nums[i]-nums[j]);

            }
            mini=min(mini,ans);
        }
        return (int)mini;
        
    }
};