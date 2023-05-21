class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int totalSum=0;
        int n =nums.size();
        set<vector<int>> s;
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i =0;i<n;i++){
            int start=i+1;
            int end =n-1;
            while(start<end){
                totalSum = nums[i]+nums[start]+nums[end];
                if(totalSum == 0 ){
                s.insert({nums[i],nums[start],nums[end]});
                start++;
                end--;
                }
                else if(totalSum < 0){
                        start++;
                }
                else{
                        end--;
                }
            }
        }
        for(auto triplets :s){
            ans.push_back(triplets);
        }
        return ans;
    }
};
        