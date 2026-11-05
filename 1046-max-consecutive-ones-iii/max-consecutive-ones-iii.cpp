class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left=0;
        int rigth=0;
        int count=0;
        int digit=0;
        while(rigth<nums.size()){
            if(nums[rigth]==0){
                count++;
            }
            while(count>k){
 if(nums[left]==0){
         count--;
         }
         left++;
            }
            digit=max(digit,rigth-left+1);
            rigth++;
        
        }

        return digit;
        
    }
};