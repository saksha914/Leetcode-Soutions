class Solution {
public:
    
    void findCombination(vector<int>& v,vector<vector<int>> &ans,vector<int> &ds ,int index,int target ){
        //base case
        if(index==v.size()){
            if(target==0){
                ans.push_back(ds);
            }
            return;
        }
        //pick up
        if(v[index]<=target){
            ds.push_back(v[index]);
            findCombination(v,ans,ds,index,target-v[index]);
            ds.pop_back();
        }
        //not pick up
        findCombination(v,ans,ds,index+1,target);
        
    }
    
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;//combined answer
        vector<int> ds;//possible combination
        findCombination(candidates,ans,ds,0,target);
        return ans;
        
    }
};