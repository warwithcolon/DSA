class Solution {
public:
    bool checkIfPangram(string sentence) {
        int arr[26]={0};
        
        for(int i=0;i<sentence.size();i++){
            char ch = sentence[i];
            if(ch >='a'&& ch<='z'){
                int a = ch - 'a';
                arr[a]=1;
            }
        }
        for(int i=0;i<26;i++)
        {
            if(arr[i] !=1){
                return false;
            }
                
            }
            
       return true;
    }
};