class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        int m = matrix.size();
        int n = matrix[0].size();
        
        int sr=0;
        int sc=0;
        int er=m-1;
        int ec=n-1;
        vector<int>ans;
        
        while(sr<=er and sc<=ec){    
            for(int i =sc;i<=ec;i++){
                ans.push_back(matrix[sr][i]);
             }
        sr++;
            for(int i =sr;i<=er;i++){
                ans.push_back(matrix[i][ec]);
            }
        ec--;
        if(er>=sr){
            for(int i =ec;i>=sc;i--){
                ans.push_back(matrix[er][i]);
            }
        }
        er--;
        if(ec>=sc){
            for(int i =er;i>=sr;i--){
                ans.push_back(matrix[i][sc]);
         }
        }
         sc++;
    }
        return ans;
}
};