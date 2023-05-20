class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n= nums.size()-1;
        int csum=0;
        int ms =INT_MIN;
        for(int i =0;i<=n;i++){
            csum=csum+nums[i];
            
            ms=max(ms,csum);
            csum = max(csum, 0);
        }
    return ms;
    }
};