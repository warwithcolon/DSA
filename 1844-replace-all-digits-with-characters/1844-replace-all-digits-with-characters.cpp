class Solution {
public:
   char shift(char ch , int i)
    {
        char ans = ch +i;
       return ans;
    }   
    string replaceDigits(string s) {
        for(int i=0;i<s.size()-1;i+=2){
            int a = s[i+1]-48;
             s[i+1] = shift(s[i],a);
        }
        return s;
        
    }
};