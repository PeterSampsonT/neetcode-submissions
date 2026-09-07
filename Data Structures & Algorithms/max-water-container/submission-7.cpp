class Solution {
public:
    int maxArea(const vector<int>& heights) {
        int max_vol = 0;
        int i = 0, j = heights.size() - 1;

        while (i < j) {
            int h_left = heights[i];
            int h_right = heights[j];
            int h = min(h_left, h_right);

            max_vol = max(max_vol, (j - i) * h);

            while (i < j && heights[i] <= h) i++;
            while (i < j && heights[j] <= h) j--;
        }

        return max_vol;
    }
};