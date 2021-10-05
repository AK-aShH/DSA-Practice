class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans(numRows);
        ans[0].push_back(1);
        int k=1;
        for(int i=1;i<numRows;i++){
            for(int j=0;j<=k;j++){
                if(j==0||j==k)
                    ans[i].push_back(1);
                else{
                    ans[i].push_back(ans[i-1][j-1]+ans[i-1][j]);
                }
            }k++;
        }
        return ans;
    }
};
