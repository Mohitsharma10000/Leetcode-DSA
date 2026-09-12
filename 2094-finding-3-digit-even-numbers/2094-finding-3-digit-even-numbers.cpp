class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        set<int>arr;
        for(int i=0;i<digits.size();i++){
            for(int j=0;j<digits.size();j++){
                for(int k=0;k<digits.size();k++){
                    if(i==j||j==k||i==k) continue;
                    if(digits[i]==0) continue;
                    if(digits[k]%2!=0) continue;
                    int num=digits[i]*100+digits[j]*10+digits[k];
                    arr.insert(num);
                }
            }
            
        }
        vector<int>ans;
            for(auto x:arr){
                ans.push_back(x);
            }
            return ans;
        
    }
};