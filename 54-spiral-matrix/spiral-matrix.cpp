class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>array;
        int i=0;
        int j=-1;
        int m=matrix.size();
        int n=matrix[0].size();
        int dir=1;
        while(m>0 && n>0) {
            for(int k=0;k<n;k++) {
                j+=dir;
                array.push_back(matrix[i][j]);
            }
            m-=1;

            for(int k=0;k<m;k++){
                i+=dir;
                array.push_back(matrix[i][j]);
            }
            n-=1;
            
            dir=dir*-1;
        }
        return array;
    }
};