class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>ds;
        helperfunc(0,ans, ds, candidates,target);
        return ans;
    }
    void helperfunc(int index , vector<vector<int>> &ans , vector<int> &ds , vector<int>candidates , int target){
    if(index == candidates.size()){
        if(target==0){
            ans.push_back(ds);
        }
        return;
    }
    if(candidates[index]<=target){
        ds.push_back(candidates[index]);
        helperfunc(index,ans, ds, candidates,target - candidates[index]);
        ds.pop_back();
    }
    helperfunc(index+1,ans, ds, candidates,target);

}

};