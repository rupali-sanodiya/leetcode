// class Solution {
// public:
//     int maxProduct(vector<int>& nums) {
//  int maximum=nums[0];
//  int ans=nums[0];
//  for(int i=1;i<nums.size();i++ ){
//     int v1=maximum*nums[i];
//     int v2=nums[i];
//     maximum=max(v1,v2);
//     ans=max(ans,maximum);
//  }
//  return ans;
//     }
// };
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        long long currMax = nums[0];
        long long currMin = nums[0];
        long long ans = nums[0];

        for (int i = 1; i < static_cast<int>(nums.size()); i++) {
            long long num = nums[i];
            if (num < 0) {
                swap(currMax, currMin);
            }
            currMax = max(num, currMax * num);
            currMin = min(num, currMin * num);
            ans = max(ans, currMax);
        }

        return static_cast<int>(ans);
    }
};