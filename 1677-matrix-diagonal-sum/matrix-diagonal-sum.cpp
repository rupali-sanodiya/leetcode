class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int add1=0;
        int add2=0;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat.size();j++){
                if(i==j ){
                   add1+= mat[i][j];
                }
                else if(i+j==(mat.size()-1) && i!=j){
                   add2+=mat[i][j];
                }
         
            }
           
        }
        return add1+add2;
    }
};