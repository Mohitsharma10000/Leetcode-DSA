class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int>ans;
        for(int i=0;i<prices.size();i++){
            int k=0;
            for(int j=i+1;j<prices.size();j++){
                
                if(prices[i]>=prices[j]){
                    int final=prices[i]-prices[j];
                    ans.push_back(final);
                    k=0;
                    break;
                }
                k++;
            }
            if(k==prices.size()-i-1){
                ans.push_back(prices[i]);
            }
            
        }
        
        if(prices.size()>ans.size()){
            int n=prices.size()-ans.size();
            for(int i=prices.size()-n;i<prices.size();i++){
                ans.push_back(prices[i]);
            }
        }
        return ans;

        
        
    }
};