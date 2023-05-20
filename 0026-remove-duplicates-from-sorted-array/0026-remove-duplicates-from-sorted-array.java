class Solution {
   public int removeDuplicates(int[] nums) {
        
        int k = 1; 
        int l = nums.length;

        for (int i = 0; i < l - 1; i++) {

            if (nums[i] < nums[i+1]) { 
            
                nums[k] = nums[i+1]; 
                k++;
            }
        }
    return k; 
}
}