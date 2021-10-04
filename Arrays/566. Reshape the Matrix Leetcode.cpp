class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m=mat.size();
        int n=mat[0].size();
        if(m*n!=r*c)
            return mat;
        else{
            vector<int>cpy(m*n);
            int k=0;
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++)
                    cpy[k++]=mat[i][j];
            }vector<vector<int>>ans(r);
            k=0;
            for(int i=0;i<r;i++){
                for(int j=0;j<c;j++){
                    ans[i].push_back(cpy[k++]);
                }
            }
            return ans;
        }
    }
};
