class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> result;
        for(int i = 0; i < nums.size(); i++) {
            if(i > k) {
                result.erase(nums[i-k-1]);
            }
            if(result.contains(nums[i])) {
                return true;
            }
            result.insert(nums[i]);
        }
        return false;
    }
};