class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n =nums.size();
        sort(nums.begin(),nums.end(),greater<int>());
        int cnt=1;
        int prev=nums[0];
        for(int i =1;i<n;++i){
            if(nums[i]!=prev){
                cnt++;
                prev=nums[i];
            }
            if(cnt==3) 
                return nums[i];
        }
        return nums[0];
    }
};