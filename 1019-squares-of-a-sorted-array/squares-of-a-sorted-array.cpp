class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
   vector<int>arr(nums.size());
   for(int i=0;i<nums.size();i++){
    arr[i]=nums[i]*nums[i];
   }
   for(int i=0;i<arr.size();i++){
    for(int j=i+1;j<arr.size();j++){
        if(arr[i]>arr[j]){
            // swap
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
   }
   return arr;
    }
     
};