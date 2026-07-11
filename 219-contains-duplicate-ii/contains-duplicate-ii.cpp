class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> result;
        for(int i = 0 ; i<nums.size();i++){
            if(result.contains(nums[i]) && (i - result[nums[i]])<=k ){
                return true;
            }
            result[nums[i]] = i;
        }
        return false;
    }
};