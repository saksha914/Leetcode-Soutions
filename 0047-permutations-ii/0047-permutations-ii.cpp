class Solution {
public:
    void recPermute(int ind, vector<int>& nums, vector<vector<int>>& ans) {
        if (ind == nums.size()) {
            ans.push_back(nums);
            return;
        }
        unordered_set<int> used; // To keep track of used elements at position 'ind'
        for (int i = ind; i < nums.size(); i++) {
            if (used.find(nums[i]) != used.end()) continue; // Skip if element is already used
            used.insert(nums[i]);
            swap(nums[i], nums[ind]);
            recPermute(ind + 1, nums, ans);
            swap(nums[i], nums[ind]); // Backtrack
        }
    }
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        recPermute(0, nums, ans);
        return ans;
    }
};
