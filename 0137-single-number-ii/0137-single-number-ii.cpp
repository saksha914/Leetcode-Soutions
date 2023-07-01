class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> hashMap;
        for(int i =0;i<nums.size();i++){
            hashMap[nums[i]]++;
        }
        for(auto x: hashMap){
            if(x.second==1)
                return x.first;
        }
        return -1;
    }
};