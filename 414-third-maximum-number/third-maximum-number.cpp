class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
     int i=0;
     int j=nums.size()-1;
     while(i<j){
        int temp=nums[i];
        nums[i]=nums[j];
        nums[j]=temp;
        i++;
        j--;
     }
     int count=1;
     for(int k=1;k<nums.size();k++){
        if(nums[k]!=nums[k-1]) {
            count++;
        }
        if(count==3){
return nums[k];
        }
     }
        return nums[0];
     }

};