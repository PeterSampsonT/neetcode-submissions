class Solution {
public:
    int trap(vector<int>& height) {

        std::vector<int> right(height.size(),0);
        right[height.size()-1]=height[height.size()-1];

        for(int i=height.size()-2;i>=0;i--)
        {
            if(height[i]>right[i+1])
            right[i]=height[i];
            else
            right[i]=right[i+1];
        }

        int total=0;
        int greatest=height[0];
        for(int i=0;i<height.size()-1;i++)
        {
            greatest=(height[i]>greatest)? height[i]:greatest;
            total+=std::min(greatest,right[i])-height[i];
        }
        return total;
    }
};
