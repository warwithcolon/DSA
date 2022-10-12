class Solution {
public:
    char toLowerCase(char c){
     if((c>='a' && c <= 'z') || (c>='0' && c <= '9')){
       return c;
   }
   else{
       return c - 'A' + 'a';
   }
}
    bool isPalindrome(string s) {
        string ans;
    for(int i=0;i<s.size();i++){
        if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z')||(s[i]>='0'&&s[i]<='9'))
            ans.push_back(s[i]);
    }
    int st = 0;
    int e = ans.size()-1;
    while(st<=e){
        if(toLowerCase(ans[st])!= toLowerCase(ans[e]))
            return 0;
        st++; e--;
    }
    return 1;
    }
};