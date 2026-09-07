class Solution {
public:
    int maxArea(vector<int>& heights) {
        int vol=0;
        int i=0,j=heights.size()-1;
        while(i<j)
        {
            int temp=(j-i)*min(heights[i],heights[j]);
            if(temp>vol)
            {
                vol=temp;
            }
            if(heights[i]<heights[j])
            i++;
            else
            j--;
        }
        return vol;
    }
};
