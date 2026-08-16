class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
int sum=0;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]==1){
                    int countrow=0;
                    int countcol=0;
                    for(int k=0;k<mat[0].size();k++){
                        if(mat[i][k]==1){
                           countrow++;
                        }
                    }
                for(int k=0;k<mat.size();k++){
                    if(mat[k][j]==1){
                        countcol++;
                    }
                }
                if(countrow==1 && countcol==1){
                    sum++;
                }
                }
            }
        }
        return sum;
    }
};