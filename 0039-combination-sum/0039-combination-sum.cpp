class Solution {
public:
    void findCombination(int index,vector<int> &arr,int target,vector<vector<int>> &ans,vector<int> &part){
        if(index == arr.size()){
            if(target == 0){
                ans.push_back(part);
            }
            return;
        }
        if(arr[index]<=target){
            part.push_back(arr[index]);
            findCombination(index,arr,target - arr[index],ans,part);
            part.pop_back();
        }
        findCombination(index+1,arr,target,ans,part);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>part;
        findCombination(0,candidates,target,ans,part);
        return ans;        
    }
};