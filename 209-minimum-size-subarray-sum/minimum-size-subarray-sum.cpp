class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum=0;
        int minimum=INT_MAX;
        int left=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        while(sum>=target){
            minimum=min(minimum,i-left+1);
            sum-=nums[left];
            left++;
        }
        }
        return minimum==INT_MAX ? 0: minimum;
        }
    
    };