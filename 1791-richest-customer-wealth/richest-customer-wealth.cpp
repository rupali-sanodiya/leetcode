class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
      int curr=0;
        for(int i=0;i<accounts.size();i++){
            int sum=0;
            for(int j=0;j<accounts[i].size();j++){
                    
                sum+=accounts[i][j];
            }

        if(curr<sum){
           curr=sum;
        }
        }
        return curr;
    }
};