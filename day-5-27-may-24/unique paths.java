class Solution {
    public int uniquePaths(int m, int n) {
     int a[][]= new int[m][n];
     a[0][0]=1;
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i-1>=0){
                a[i][j]+=a[i-1][j];
            }
            if(j-1>=0){
                a[i][j]+=a[i][j-1];
            }
        }
     } return a[m-1][n-1];  
    }
}