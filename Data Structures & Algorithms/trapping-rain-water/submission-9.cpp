class Solution {
public:
    int trap(vector<int>& height) {
        int i=0;
        int j=height.size()-1;
        int lm=height[i];
        int rm=height[j];
        int total=0;
        while(i<j)
        {
            if(lm>rm)
            {
                j--;
                rm=(height[j]>rm)? height[j]:rm;
                total+= rm-height[j];
            }
            else
            {
                i++;
                lm=(height[i]>lm)? height[i]:lm;
                total+= lm-height[i];
            }
        }
        return total;
    }
};
