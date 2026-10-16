class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        int count=0,maxi=0;
        set<int>s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);

        }
        vector<int>arr;
        for(auto v:s){
            arr.push_back(v);
        }
        if(arr.empty()) return 0;
        if(arr.size()==1) return 1;
        for(int i=1;i<arr.size();i++){
            if(arr[i-1]==arr[i]-1) {count++; maxi=max(maxi,count);}
            else count=0;
        }
        return maxi+1;

        
    }
};