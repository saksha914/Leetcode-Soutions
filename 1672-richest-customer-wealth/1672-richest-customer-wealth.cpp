class Solution {
public:
    int maximumWealth(vector<vector<int>>& a) {
        int ans = INT_MIN;
        for(auto &i:a)
        {
            ans = max(ans, accumulate(i.begin(),i.end(),0));
        }
        return ans;
    }
};