class Solution {
public:
void generate(vector<string>&ans,string s,int n,int close,int open){
    if(close>open){
        return;
    }
    if(close==n&&open==n){
        ans.push_back(s);
        return;
    }
    if(open<n)
    generate(ans,s+"(",n,close,open+1);
    if(close<open)
    generate(ans,s+")",n,close+1,open);
    return;

}
    vector<string> generateParenthesis(int n) {
        
        vector<string>ans;
        string s="";
        generate(ans,s,n,0,0);
        return ans;
        
    }
};