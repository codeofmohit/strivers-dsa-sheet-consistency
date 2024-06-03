class Solution {
private:
    int rec(vector<vector<int>>& grid,int t){
        //base case
        int m=grid.size(),n=grid[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==2){
                    if(i+1<m && grid[i+1][j]==1)grid[i+1][j]=-1;
                    if(j+1<n && grid[i][j+1]==1)grid[i][j+1]=-1;
                    if(i-1>=0 && grid[i-1][j]==1)grid[i-1][j]=-1;
                    if(j-1>=0 && grid[i][j-1]==1)grid[i][j-1]=-1;
                }
            }
        }
        int nof=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==-1){
                    nof++;
                    grid[i][j]=2;
                }
            }
        }
        if(!nof) return t;
        return rec(grid,t+1);
    }
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int ans= rec(grid,0);
        int m=grid.size(),n=grid[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    return -1;
                }
            }
        }
        return ans;
    }
};