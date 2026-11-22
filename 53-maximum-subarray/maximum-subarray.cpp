class Solution {
public:
    int maxSubArray(vector<int>& nums) {
    int maximum=nums[0];
    int ans=nums[0];
    for(int i=1;i<nums.size();i++){
        int first=maximum+nums[i];
        int second=nums[i];
        maximum=max(first,second);
        ans=max(ans,maximum);
    }
    return ans;
    }
};