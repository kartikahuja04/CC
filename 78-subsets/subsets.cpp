class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int> arr;
        allsubset(arr, 0, ans , nums);
        return ans;
    }
    void allsubset(vector<int> &arr, int index , vector<vector<int>>&ans , vector<int> nums){
        if(index == nums.size()){
            ans.push_back(arr);
            return;
        }
        arr.push_back(nums[index]);
        allsubset(arr,index+1,ans,nums);
        arr.pop_back();
        allsubset(arr,index+1,ans,nums);
    }
};