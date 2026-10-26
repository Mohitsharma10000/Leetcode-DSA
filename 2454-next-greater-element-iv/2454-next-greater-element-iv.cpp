class Solution {
public:
    vector<int> secondGreaterElement(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n,-1);
        stack<int>st,st2;
       vector<int>temp;
       for(int i=0;i<n;i++){
        while(!st2.empty()&&nums[i]>nums[st2.top()]){
            ans[st2.top()]=nums[i];
            st2.pop();
        }
        while(!st.empty()&&nums[i]>nums[st.top()]){
            temp.push_back(st.top());
            st.pop();
        }
        for(int j=temp.size()-1;j>=0;j--){
            st2.push(temp[j]);
        }
        temp.clear();
        st.push(i);
       }
       return ans;
        
    }
};