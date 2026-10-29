class Solution {
public:
    int trap(vector<int>& height) {
        int left=0;
        int n=height.size();
        int right=n-1;
        int total_water=0;
        int max_left=height[left];
        int max_right=height[right];
        while(left<right){
            if(height[left]<height[right]){
                max_left=max(height[left],max_left);
                total_water+=max_left-height[left];
                left++;
            }
            else{
                max_right=max(height[right],max_right);
                total_water+=max_right-height[right];
                right--;
            }
        }
        return total_water;
    }
};