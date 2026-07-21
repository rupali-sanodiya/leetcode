class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n=nums.size();
        vector<int>arr(n);
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            arr[i]=sum;
        }
        return arr;
    }
};