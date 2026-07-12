class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        queue<pair<int,int>> q;
        for(int i = 0; i < m ; i++){
            for(int j = 0; j < n; j++){
                if(mat[i][j] == 0){
                    q.push({i,j});
                }
                else{
                    mat[i][j] = INT_MAX;
                }
            }
        }
        vector<int> delRow = {-1,0,1,0};
        vector<int> delCol = {0,1,0,-1};
        while(!q.empty()){
            int k = q.size();
            for(int i = 0 ; i < k ; i++){
                auto it = q.front();
                q.pop();
                int row = it.first;
                int col = it.second;
                for(int i = 0; i < 4 ; i++){
                    int nrow = row + delRow[i];
                    int ncol = col + delCol[i];

                    if(nrow>=0 && nrow < m && ncol >= 0 && ncol < n && mat[nrow][ncol] > mat[row][col] + 1){
                        mat[nrow][ncol] = mat[row][col] + 1;
                        q.push({nrow,ncol});
                    }
                }
            }
        }
        return mat;
    }
};