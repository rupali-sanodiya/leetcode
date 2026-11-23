class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int maximum=nums[0];
        int minimum=nums[0];
        int result=abs(nums[0]);
        for(int i=1;i<nums.size();i++){
            maximum=max(maximum+nums[i],nums[i]);
            minimum=min(minimum+nums[i],nums[i]);
            result=max({result,abs(maximum),abs(minimum)});
            
        }
        return result;
    }
};