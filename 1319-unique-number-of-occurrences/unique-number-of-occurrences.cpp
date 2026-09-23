class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        // cheack friquency
      vector<int>ans(2001,0);
      for(int num:arr){
        ans[num+1000]++;
      }
      sort(ans.begin(),ans.end());
      for(int i=0;i<2001;i++){
        if(ans[i]!=0 && ans[i]==ans[i-1]){
 return false;
        }
           
        
        
      }
       return true;
    }
};