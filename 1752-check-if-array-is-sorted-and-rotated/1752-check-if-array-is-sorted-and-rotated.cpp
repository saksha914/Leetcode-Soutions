class Solution {
public:
    bool check(vector<int>& nums) {
        int n= nums.size();
        int count =0;
        if(nums[n-1]>nums[0]) 
            count++;
        for(int i =1;i<n;i++){
            if(nums[i]<nums[i-1])
                count++;
        }
        return count<=1;
    }
};