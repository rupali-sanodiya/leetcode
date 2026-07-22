class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
     int n=nums.size();
     vector<int>arr(n);
     int sum=0;
     for(int i=0;i<n;i++){
      
        arr[i]=nums[i]+sum;
        sum+=nums[i];
     }
    return arr;
    }
};