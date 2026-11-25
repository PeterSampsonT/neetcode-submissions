class Solution {
public:
    int trap(vector<int>& height) {
        int i=0,j=height.size()-1;
        int lm=0,rm=0;
        int total=0;

        while(i<j)
        {
            lm=(height[i]>lm)? height[i]:lm;
            rm=(height[j]>rm)? height[j]:rm;

            if(lm<=rm)
            {
                i++;
                total+=(height[i]>lm)? 0:(lm-height[i]);                
            }
            else
            {
                j--;
                total+=(height[j]>rm)? 0:(rm-height[j]);
            }
        }
        return total;
    }
};
