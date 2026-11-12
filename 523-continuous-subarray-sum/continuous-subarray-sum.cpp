class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
      int n=nums.size();
      if(n<2){
        return false;
      }
      unordered_map<int,int>map;
      map[0]=-1;
      int current=0;
      for(int i=0;i<n;i++){
        current+=nums[i];
        int remender=current%k;
        if(remender<0){
            current+=k;
        }
        if(map.find(remender)!=map.end()){
            if(i-map[remender]>=2){
                return true;
            }
        }
        else{
            map[remender]=i;
        }

      }
      return false;
      }
};