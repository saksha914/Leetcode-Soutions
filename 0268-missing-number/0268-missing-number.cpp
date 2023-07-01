class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_map<int,int> hashMap;
            for(int i =0;i<nums.size();i++){
                hashMap[i]=0;
            }
            for(int i =0;i<nums.size();i++){
                hashMap[nums[i]]++;
            }
        for(auto x : hashMap){
            if(x.second==0)
                return x.first;
        }
        return nums.size();
    }
};