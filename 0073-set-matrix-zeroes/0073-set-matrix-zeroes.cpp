class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<bool>zerorows(m,false);
        vector<bool>zerocols(n,false);
        for(int i =0; i<m; i++){
            for(int j=0; j<n; j++){
                if(matrix[i][j]==0){
                zerorows[i]=true;
                zerocols[j]=true;
            }
        }
        }
        for(int i =0; i<m; i++){
            for(int j=0; j<n; j++){
                if(zerorows[i] || zerocols[j]){
                    matrix[i][j]=0;
                }
            }
        }
    }
};