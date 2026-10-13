class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        long long sum=0;
        for(int i=0;i<nums.size();i++){
            nums[i]=abs(nums[i]);
        }
        sort(nums.begin(),nums.end());
        long long positive=0,negative=0;
        int i=0,j=nums.size()-1;
        while(i<j){
            negative+=nums[i]*nums[i];
            positive+=nums[j]*nums[j];
            i++;
            j--;
        }
        if(nums.size()%2!=0) positive+=nums[nums.size()/2]*nums[nums.size()/2];
        return sum=positive-negative;

        
    }
};