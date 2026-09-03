class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n=customers.size();
        
        int sum=0,ans=INT_MIN;
        for(int i=0;i<n;i++){
            if(grumpy[i]==0){
                sum+=customers[i];
            }
        }
        int window=0;
        for(int i=0;i<minutes;i++){
            if(grumpy[i]==1){
                window+=customers[i];
            }
        }
        ans=window;
        for(int i=minutes;i<n;i++){
            if(grumpy[i]==1){
                window+=customers[i];
            }
            if(grumpy[i-minutes]==1){
                window-=customers[i-minutes];
            }
            ans=max(ans,window);
        }
        return ans+sum;


        
    }
};