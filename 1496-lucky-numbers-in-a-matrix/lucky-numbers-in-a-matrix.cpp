class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        vector<int>ans;
       for(int i=0;i<matrix.size();i++){
        int minvalue=matrix[i][0];
        int minvcolum=0;
        // row
        for(int j=1;j<matrix[i].size();j++){
            if(matrix[i][j]<minvalue){
                minvalue=matrix[i][j];
                minvcolum=j;
            }
        }
        bool lucky=true;
        // colomn
        for(int k=0;k<matrix.size();k++){
            if(matrix[k][minvcolum]>minvalue){
                lucky=false;
                break;
            }
        }
        if(lucky){
            ans.push_back(minvalue);
        }
       }
       return ans;


    }
    };
       