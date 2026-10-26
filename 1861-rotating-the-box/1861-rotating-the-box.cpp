class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& boxGrid) {
        int n=boxGrid.size(),m=boxGrid[0].size();
        vector<vector<char>> box(m,vector<char>(n));
        for(int i=0;i<n;i++){
            int k=m-1;
            for(int j=m-1;j>=0;j--){
                if(boxGrid[i][j]=='*'){
                    k=j-1;
                    
                }
                else if(boxGrid[i][j]=='#'){
                    swap(boxGrid[i][j],boxGrid[i][k]);
                    k--;
                }

                
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                box[j][n-1-i]=boxGrid[i][j];
            }
        }
        return box;
        
    }
};