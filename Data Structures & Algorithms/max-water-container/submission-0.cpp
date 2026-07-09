class Solution {
   public:
    int maxArea(vector<int>& heights) {
        int res = 0;

        for (int i = 0; i < heights.size() - 1; i++) {
            for (int j = i + 1; j < heights.size(); j++) {
                int height = min(heights[i], heights[j]);
                int width = j - i;

                int area = height * width;
                res = max(res, area);
            }
        }

        return res;
    }
};
