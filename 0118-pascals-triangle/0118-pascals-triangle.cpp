class Solution {
public:
    vector<int> generateRows(int row){
        int ans=1;
        vector<int> vect;
        vect.push_back(1);
        for(int i =1;i<row;i++){
            ans=ans*(row-i);
            ans=ans/i;
            vect.push_back(ans);
        }
        return vect;
    }
    
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ansVect;
        for(int i=1;i<=numRows;i++){
            ansVect.push_back(generateRows(i));
        }
        return ansVect;
    }
};