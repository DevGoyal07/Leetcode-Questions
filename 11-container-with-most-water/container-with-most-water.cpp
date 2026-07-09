class Solution {
public:
    int maxArea(vector<int>& height) {

        int lp=0;
        int rp=height.size()-1;
        long long max_area = 0;

        while(lp<rp){
            int width = rp-lp;
            int h = min(height[rp], height[lp]);
            long long area = h*width;
            max_area= max(area, max_area);

            height[lp]<height[rp] ? lp++ : rp--;

        }
        return max_area;
        
    }
};