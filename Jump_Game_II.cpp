class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n, 0);
        for(int i=n-2; i>=0; i--){
            int miStps=INT_MAX;
            for(int j=i+1; j<=min(i+nums[i], n-1); j++){
                if(dp[j]==INT_MAX){
                    continue;
                }
                
                miStps=min(miStps, dp[j]+1);
            }
            
            dp[i]=miStps;
        }
        
        return dp[0];
    }
};
