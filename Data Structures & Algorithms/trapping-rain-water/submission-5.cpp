class Solution {
public:
    int trap(vector<int>& height) {
        std::vector<int> right(height.size(),0);
        std::vector<int> left(height.size(),0);

        left[0]=height[0];
        right[height.size()-1]=height[height.size()-1];

        for(int i=1;i<height.size()-1;i++)
        {
            if(height[i]>left[i-1])
            left[i]=height[i];
            else
            left[i]=left[i-1];
        }

        for(int i=height.size()-2;i>=0;i--)
        {
            if(height[i]>right[i+1])
            right[i]=height[i];
            else
            right[i]=right[i+1];
        }

        int total=0;

        for(int i=0;i<height.size()-1;i++)
        {
            total+=std::min(left[i],right[i])-height[i];
        }
        return total;
    }
};
