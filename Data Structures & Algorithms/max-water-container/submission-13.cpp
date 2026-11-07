class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();

        int i=0;
        int j=n-1;
        int MAX=0;
        while(i<j)
        {
            int curr;
            curr=(std::min(heights[i],heights[j]))*(j-i);
            MAX=std::max(curr,MAX);

            if(heights[i]<heights[j])
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return MAX;
    }
};
