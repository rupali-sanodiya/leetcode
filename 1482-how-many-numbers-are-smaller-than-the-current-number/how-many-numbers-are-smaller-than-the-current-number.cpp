class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>arr(nums.size());  
  for(int i=0;i<nums.size();i++){
     int index=0;
        for(int j=0;j<nums.size();j++){
            if(nums[i]>nums[j]) {
           index++;
   
            }

        }
arr[i]=index;
    }
    return arr;
    }
    
};