class Solution {
public:


    void bfs(int row, int col, vector<vector<char>>& grid, vector<vector<int>>& vis){
        queue<pair<int,int>> q;
        q.push({row,col});
        vis[row][col]=1;

        int n=grid.size();
        int m = grid[0].size();

        while(!q.empty()){
            pair<int,int> node = q.front();
            int row = node.first;
            int col = node.second;
            q.pop();

            for(int delrow=-1;delrow<=1;delrow++){
                    int nrow = row;
                    int ncol = col+delrow;
                    if( nrow < n && nrow>=0 
                        && ncol < m && ncol>=0
                        && !vis[nrow][ncol]
                        && grid[nrow][ncol] == '1'){
                            vis[nrow][ncol]=1;
                            q.push({nrow,ncol});
                        }
                    
                    nrow = row+delrow;
                    ncol = col;
                    if( nrow < n && nrow>=0 
                        && ncol < m && ncol>=0
                        && !vis[nrow][ncol]
                        && grid[nrow][ncol] == '1'){
                            vis[nrow][ncol]=1;
                            q.push({nrow,ncol});
                        }
                
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {

        int rows=grid.size();
        int cols = grid[0].size();
        int numIslands = 0;
        vector<vector<int>> vis(rows,vector<int>(cols,0));

        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(!vis[i][j] && grid[i][j]=='1'){
                    numIslands++;
                    bfs(i,j,grid,vis);
                }
            }
        }

        return numIslands;



        
    }
};
