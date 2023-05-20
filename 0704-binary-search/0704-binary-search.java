class Solution {
    public int search(int[] nums, int target) {
        int l=0;
        int h=nums.length-1;
        while(h-l>1){
            int mid= (h+l)/2;
            if(nums[mid]<target){
                l=mid+1;
            }
            else{
                h=mid;
            }
        }
        if(nums[l]==target){
        return l;
         }
        else if(nums[h]==target){
        return h;
        }
        else{
            return -1;
        }
    }
}