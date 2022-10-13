class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxi =-1;
        for(int i=0;i<candies.size();i++){
             maxi =max(maxi,candies[i]);
        }
        
    vector<int> temp;
        for(int i=0;i<candies.size();i++){
            int a = candies[i]+extraCandies;
            temp.push_back(a);
        }
        
        vector<bool> ans;
        for(int i=0;i<candies.size();i++){
            if(temp[i]>=maxi){
                ans.push_back(true);
            }else
                ans.push_back(false);
        }
      return ans;  
    }
};