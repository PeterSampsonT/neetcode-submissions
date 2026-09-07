class Solution {
public:
    int maxArea(const vector<int>& heights) {
        int max_vol = 0;
        int i = 0, j = heights.size() - 1;

        while (i < j) {
            int h = min(heights[i], heights[j]);

            max_vol = max(max_vol, (j - i) * h);

            while (i < j && heights[i] <= h) i++;
            while (i < j && heights[j] <= h) j--;
        }

        return max_vol;
    }
};