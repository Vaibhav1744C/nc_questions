class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxArea=0;
        int n=height.size();
        int i=0;
        int j=n-1;
        while(i<j){
            int mul=j-i;
            int mul1=min(height[i],height[j]);
            maxArea=max(maxArea,mul*mul1);

            height[i]<height[j]?i++:j--;
        }
        return maxArea;
    }
};