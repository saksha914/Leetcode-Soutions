class Solution {
public:
    int maximumDifference(vector<int>& nums) {
      int mn=nums[0];
      int diff=0;
        int maxDiff=-1;
        for(int i =0;i<nums.size();i++){
            diff=nums[i]-mn;
            maxDiff=max(diff,maxDiff);
            mn=min(mn,nums[i]);
        }
        return maxDiff==0 ? -1 : maxDiff;
    }
};