class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int minimum=nums[0];
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(sum>minimum){
                minimum=sum;
            }
            if(sum<0){
                sum=0;
            }
        }
        return minimum;
    }
};