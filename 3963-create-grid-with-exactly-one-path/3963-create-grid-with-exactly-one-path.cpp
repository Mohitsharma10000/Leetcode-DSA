class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<vector<string>>arr(m,vector<string>(n,"#"));
       int i=0,j=0;
       while(i<m){
        arr[i][j]=".";
        i++;
       }
       i--;
       while(j<n){
        arr[i][j]=".";
        j++;
       }
        vector<string>ans;
        for(int i=0;i<m;i++){
            string x="";
            for(int j=0;j<n;j++){
                x+=arr[i][j];
            }
            ans.push_back(x);
        }
        return ans;
        
    }
};