class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int>mpp;
        int ans=0;
        for(auto x : nums){
            ans+=mpp[x];
            mpp[x]++;
        }
        return ans;
    }
};