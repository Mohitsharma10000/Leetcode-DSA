class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        int maxi=INT_MIN,n=nums.size();
        vector<bool>arr(n,false);
        for(int i=0;i<n;i++){
            int k=i;
            int len=0;
            while(!arr[k]){
                arr[k]=true;
                len++;
                k=nums[k];
            }
            maxi=max(len,maxi);

        }
        return maxi;
        
    }
};