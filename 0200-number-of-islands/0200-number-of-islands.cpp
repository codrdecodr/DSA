class Solution {
public:
    bool isvalid(int i,int j,int m,int n){
        if(i < 0 || i >= m) return false;
        if(j < 0 || j >= n) return false;
        return true;
    }
    void bfs(int i,int j,vector<vector<char>>& grid,vector<vector<int>>& vis){
        int m = grid.size();
        int n = grid[0].size();
        vis[i][j] = 1;
        queue<pair<int,int>> q;
        q.push({i,j});
        while(!q.empty()){
            int row = q.front().first;
            int col = q.front().second;
            q.pop();
            vector<int> dr = {-1,0,1,0};
            vector<int> dc = {0,-1,0,1};
            for(int i = 0; i < 4 ; i++){
                int nrow = row + dr[i];
                int ncol = col + dc[i];
                if(isvalid(nrow,ncol,m,n) && grid[nrow][ncol] == '1' && vis[nrow][ncol] == 0){
                    vis[nrow][ncol] = 1;
                    q.push({nrow,ncol});
                }
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int islands = 0;
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> vis(m,vector<int>(n,0));
        for(int i = 0; i < m ; i++){
            for(int j = 0; j < n; j++){
                if(grid[i][j] == '1' && vis[i][j] == 0){
                    islands++;
                    bfs(i,j,grid,vis);
                }
            }
        }
        return islands;
    }
};