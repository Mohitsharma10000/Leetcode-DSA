class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>ans;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                ans.push_back(nums[i]);
                break;
               
                
            }
        }
        int n=nums.size();
        for(int i=1;i<=n;i++){
            if(!binary_search(nums.begin(),nums.end(),i)){
                ans.push_back(i);
                break;
            }
        }
        return ans;
        
        
    }
};