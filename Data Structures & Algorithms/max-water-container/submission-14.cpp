class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();

        int i=0;
        int j=n-1;
        int MAX=0;
        while(i<j)
        {
            int curr=(j-i)*((heights[i]<heights[j])? heights[i]:heights[j]);
            MAX=std::max(MAX,curr);

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
