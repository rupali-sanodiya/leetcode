class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
vector<int>arr(n,0);
int count=0;
int product=1;
for(int i=0;i<n;i++){
if(nums[i]==0){
    count++;
}
else{
product*=nums[i];

}
}
if(count>1) return arr;
for(int i=0;i<n;i++){
if(count==1){
    if(nums[i]==0){
        arr[i]=product;
    }
}
    else{
    arr[i]=product/nums[i];
}
}
return arr;
    }
};