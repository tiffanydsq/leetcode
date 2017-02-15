class Solution {
public:
    void bfs(vector<vector<char>>& grid,int i,int j){
        if(i+1<grid.size()) {
            if(grid[i+1][j]=='1'){
                grid[i+1][j]='0';
                bfs(grid,i+1,j);
            }
        }
        if(j+1<grid[0].size()) {
            if(grid[i][j+1]=='1'){
                grid[i][j+1]='0';
                bfs(grid,i,j+1);
            }
        }
        if(i-1>=0) {
            if(grid[i-1][j]=='1'){
                grid[i-1][j]='0';
                bfs(grid,i-1,j);
            }
        }
        if(j-1>=0) {
            if(grid[i][j-1]=='1'){
                grid[i][j-1]='0';
                bfs(grid,i,j-1);
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        vector<vector<char>> vst;
        int count=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]=='1') {
                    grid[i][j]='0';
                    count++;
                    bfs(grid,i,j);
                }
            }
        }
        return count;
    }
};