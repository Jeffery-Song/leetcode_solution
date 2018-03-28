class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0;
        int r=height.size()-1;
        int maxx=0;
        while(l<r){
            int s=min(height[l],height[r])*(r-l);
            maxx=max(maxx,s);
            if(height[l]>height[r])
                r--;
            else
                l++;
        }
        return maxx;
    }
};