class Solution {
public:
    int maxProduct(vector<int>& nums) {
 int maximum=nums[0];
 int minimum=nums[0];
 int ans=nums[0];
 for(int i=1;i<nums.size();i++ ){
    int v1=maximum*nums[i];
    int v2=minimum*nums[i];
    int v3=nums[i];
    maximum=max(v1,max(v2,v3));
    minimum=min(v1,min(v2,v3));
    ans=max(ans,maximum);
 }
 return ans;
    }
};

