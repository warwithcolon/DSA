class Solution {
public:
    bool isPalindrome(int x) {
       long long int temp = x;
        if(x<0){
            return false;
        }
       long long  int ans=0;
        while(x>0){
           long long  int mod = x%10;
            ans = (ans*10)+mod;
            x=x/10;
        }
        if( ans==temp)
        {
            return true;
        } 
       return false;
    }
};