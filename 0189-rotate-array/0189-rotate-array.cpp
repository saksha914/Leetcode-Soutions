class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        unsigned int l = nums.size();
        vector<int> v(l);
        k=k%l;
        for(int i =0;i<l;i++){
            v[i]=nums[i];
        }
        for(int i=0;i<l;i++){
            if(i<k){
                nums[i]=v[l+i-k];
            }
            else{
                nums[i]=v[i-k];
                
            }
    }
    }
};