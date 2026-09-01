class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int ans=INT_MIN,sum=0;
        int n=cardPoints.size();
        for(int i=0;i<k;i++){
            sum+=cardPoints[i];

        }
        ans=sum;
        int left=k-1,right=n-1;
        for(int i=0;i<k;i++){
            sum-=cardPoints[left--];
            sum+=cardPoints[right--];
            ans=max(ans,sum);
        }
        
        return ans;
        
    }
};