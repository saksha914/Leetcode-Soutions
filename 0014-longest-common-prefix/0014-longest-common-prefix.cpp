class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        sort(strs.begin(),strs.end());
        string ans="";
        string first=strs[0];
        string last=strs[n-1];
        int mn=min(first.size(),last.size());
        for(int i =0;i<mn;i++){
                if(first[i]!=last[i])
                        return ans;
                ans=ans+first[i];
        }
        return ans;    
    }
};