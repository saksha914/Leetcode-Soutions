class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int sum=0;
        int ans =0;
        int min =INT_MAX;
        sort(nums.begin(),nums.end());
        for(int i =0;i<nums.size();i++){
            int j=i+1;
            int k=nums.size()-1;
            while(j<k){
                sum=nums[i]+nums[j]+nums[k];
                if(sum==target){
                    return sum;
                }
                else if(abs(sum-target)<min){
                    min =abs(sum-target);
                    ans=sum;
                }
                if(sum<target) j++;
                else k--;
        }
        }
        return ans;
    }
};