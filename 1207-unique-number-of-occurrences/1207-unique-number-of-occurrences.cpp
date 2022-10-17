class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int>ans;
        int size = arr.size();
        int i=0;
        sort(arr.begin(),arr.end());
        while(i<size){
            int count =1;
            
            for(int j =i+1;j<arr.size();j++){
                if(arr[i]==arr[j]){
                    count++;
                }
                
                
            }
            ans.push_back(count);
                i = i+count;
            
        }
        sort(ans.begin(),ans.end());
        for(int k=0;k<ans.size()-1;k++){
            if(ans[k]==ans[k+1]){
                return false;
            }
        }
        return true;
    }
};