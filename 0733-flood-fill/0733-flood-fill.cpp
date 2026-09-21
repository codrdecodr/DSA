class Solution {
public:
    bool isvalid(int r, int c, int n, int m) {
        if (r < 0 || r >= n)
            return false;
        if (c < 0 || c >= m)
            return false;
        return true;
    }
    void dfs(int i, int j, int color, int og, vector<vector<int>>& image,vector<vector<int>>& newImg) {
        int n = image.size();
        int m = image[0].size();
        newImg[i][j] = color;
        vector<int> dr = {-1, 0, 1, 0};
        vector<int> dc = {0, -1, 0, 1};
        for (int k = 0; k < 4; k++) {
            int nrow = i + dr[k];
            int ncol = j + dc[k];
            if (isvalid(nrow, ncol, n, m) && image[nrow][ncol] == og &&
                newImg[nrow][ncol] != color) {
                dfs(nrow, ncol, color, og, image, newImg);
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,int color) {
        int n = image.size();
        int m = image[0].size();
        int og = image[sr][sc];
        if(og == color) return image;
        vector<vector<int>> newImg = image;
        dfs(sr, sc, color, og, image, newImg);
        return newImg;
    }
};