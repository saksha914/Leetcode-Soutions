class Solution {
public:
    void reverse(vector<vector<int>> &m){
        int row =m.size();
        for(int i =0;i<row;i++){
            int start =0;
            int end =row-1;
            while(start<end){
            swap(m[i][start],m[i][end]);
            start++;
            end--;
            }
        }
    }
    
    void transpose(vector<vector<int>> &m){
        int row =m.size();
        int col=m[0].size();
        for(int i =0;i<row;i++){
            for(int j =0;j<col;j++){
                if(i<j)
                swap(m[i][j],m[j][i]);
            }
        }
    }
    
    void rotate(vector<vector<int>>& matrix) {
        transpose(matrix);
        reverse(matrix);
        
    }
};