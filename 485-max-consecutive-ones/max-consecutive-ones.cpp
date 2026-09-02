class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
         int digit=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
               count++;
              
            }
            else {
                 digit=max(count,digit);
                count=0;
            }
        }
        return max(count,digit);
   
    }
};