class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int,int> hashMap;
        vector<int> ans;
        for(int i =0;i<nums.size();i++){
            hashMap[nums[i]]++;
        }
        for(auto x: hashMap){
            if(x.second==1)
                ans.push_back(x.first);
        }
        return ans;
    }
};