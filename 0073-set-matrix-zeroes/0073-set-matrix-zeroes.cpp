class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size(), m=matrix[0].size();
        vector<vector<int>>res(n,vector<int>(m,1));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                res[i][j] = matrix[i][j];
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if( matrix[i][j] == 0 ){
                    int row = i, col = j;
                    while(row >= 0){
                        res[row][j] = 0;
                        row--;
                    }
                    row = i;
                    while(row < n){
                        res[row][j] = 0;
                        row++;
                    }
                    while(col >= 0){
                        res[i][col] = 0;
                        col--;
                    }
                    col = j;
                    while(col < m){
                        res[i][col] = 0;
                        col++;
                    }
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                matrix[i][j] = res[i][j];
            }
        }
    }
};