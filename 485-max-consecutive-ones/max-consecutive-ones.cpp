class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
  int count=0;
  int current=0;
  for(int i=0;i<nums.size();i++){
    if(nums[i]==1){
        count++;
     current= max(current,count);
    }
    else{
        count=0;
    }
  }
  return current;
    }
};