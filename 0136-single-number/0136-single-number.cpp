class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> hashMap;
        for(int i =0;i<nums.size();i++){
            hashMap[nums[i]]++;
        } 
        int i =0;
        for(i =0;i<nums.size();i++){
            if(hashMap[nums[i]]==1)
                break;
        }
        return nums[i];
    }
};