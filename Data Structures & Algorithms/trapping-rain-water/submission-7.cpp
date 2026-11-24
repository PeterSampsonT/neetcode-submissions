class Solution {
public:
    int trap(vector<int>& height) {
        int a=0;
        std::vector<int> left(height.size(),0);
        std::vector<int> right(height.size(),0);

        for(int i=0;i<height.size();++i)
        {
            a=(a>height[i])? a:height[i];
            left[i]=a;
        }
        a=0;
        for(int i=height.size()-1;i>=0;--i)
        {
            a=(a>height[i])? a:height[i];
            right[i]=a;
        }

        int cap=0;

        for(int i=0;i<height.size();++i)
        {
            cap+=std::min(left[i],right[i])-height[i];
        }
        return cap;
    }
};
