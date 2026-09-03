class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n=arr.size();
        vector<int>ans(n);
       int j=0;
       for(int i=0;i<n && j<n; i++){
        if(arr[i]==0){
            ans[j++]=0;
if(j<n){
    ans[j++]=0;
}
        }
        else{
            ans[j++]=arr[i];
        }
       }
       arr=ans;

        }
      
};