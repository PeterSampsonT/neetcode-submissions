class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        std::vector<int> right(heights.size(),heights.size());
        std::vector<int> left(heights.size(),-1);
        std::vector<int> s;
        s.reserve(heights.size());

        for(int i=0;i<heights.size();++i)
        {
            while(!s.empty() && heights[s.back()]>heights[i])
            {
                right[s.back()]=i;
                s.pop_back();
            }
            s.push_back(i);
        }
        s.clear();
        for(int i=heights.size()-1;i>=0;--i)
        {
            while(!s.empty() && heights[s.back()]>heights[i])
            {
                left[s.back()]=i;
                s.pop_back();
            }
            s.push_back(i);
        }
        int MAX=0;

        for(int i=0;i<heights.size();++i)
        {
            MAX=std::max((right[i]-left[i]-1)*heights[i],MAX);
        }
        return MAX;
    }
};
