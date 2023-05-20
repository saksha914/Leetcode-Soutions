class Solution {
public:
    bool isPalindrome(int x) {
        int r =0;
        int temp =x;
        long long int rev=0;
        while(x!=0){
        r=x%10;
        rev = (rev*10)+r;
        x=x/10;
        }
        if(temp==rev){
            if(rev<0){
                return false;
            }
            return true;
        }
        else{
            return false;
        }
        
    }
};