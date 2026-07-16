class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> result;
        int i,j,k;
        int n = nums.size();
        int reqSum;
        for(i = 0;i<n-2;i++){
            if (i > 0 && nums[i] == nums[i-1]) continue;
            j = i+1;
            k = n-1;
            reqSum = -nums[i];
            while(j<k){
                int sum = nums[j] + nums[k];
                if(reqSum == sum){
                    result.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                    while(j<k && nums[j] == nums[j-1]) j++;
                    while(j<k && nums[k] == nums[k+1]) k--;
                }
                else if(sum<reqSum){
                    j++;
                }
                else{
                    k--;
                }
            }
        }
        return result;
    }
};