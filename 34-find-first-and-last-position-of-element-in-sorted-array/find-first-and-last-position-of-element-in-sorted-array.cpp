class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
     vector<int>arr={-1,-1};
     if(nums.empty()){
        return arr;
     }
     int start=0;
     int end=nums.size()-1;
     while(start<=end){
        int mid=start+(end-start)/2;
        if(nums[mid]>=target){
         if(nums[mid]==target){
                arr[0]=mid;
            }
            end=mid-1;
        }
        else{
            start=mid+1;
        }
     }
     start=0;
     end=nums.size()-1;
     while(start<=end){
        int mid=start+(end-start)/2;
if(nums[mid]<=target){
    if(nums[mid]==target){
        arr[1]=mid;
    }
    start=mid+1;
}
else{
    end=mid-1;
}
     }
     return arr;
       }
};