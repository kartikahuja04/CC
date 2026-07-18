class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int left = 0;
        int right = n-1;
        int width , cHeight , currArea;
        int resultArea = 0;
        while(left<=right){
            width = right - left;
            cHeight = min(height[left],height[right]);
            currArea = width*cHeight;
            resultArea = max(resultArea , currArea);
            height[left]<height[right]?left++:right--;
        }
        return resultArea;
    }
};