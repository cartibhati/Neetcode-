class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int n=height.size();
        int j=n-1;
        int ans= 0;
        while(i<j){
            int len = min(height[j],height[i]);
            int breadth = j-i;
            int area= len*breadth;
            ans=max(area,ans);
            if(height[i]<height[j])
            i++;
            else
            j--;
        }
        return ans;
    }
};