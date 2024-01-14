class Solution {
public:
    vector<int> getRow(int rowIndex) {
        long long  ans=1;
        vector<int> vect;
        for(int i =0;i<=rowIndex;i++){
            vect.push_back(ans);
            ans=ans*(rowIndex-i)/(i+1);
        }
        return vect;
    }
};