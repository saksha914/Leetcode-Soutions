class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> hashMap;
        for(int i =0;i<nums.size();i++){
            hashMap[nums[i]]++;
        }
        int n=nums.size()/2;
        int max=hashMap[0];
        for(auto x : hashMap){
            if(x.second>n){
                max=x.first;
            }
        }
        return max;
    }
};