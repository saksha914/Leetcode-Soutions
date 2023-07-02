class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int mx=*max_element(nums.begin(),nums.end());
        int mn=*min_element(nums.begin(),nums.end());
        for(auto x: nums){
            if(x!=mn and x!=mx)
                return x;
        }
        return -1;
    }
};