class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
      vector<int>arr(2);
      int start=0;
      int end=numbers.size()-1;
      while(start<end){
        int sum=numbers[start]+numbers[end];
        if(sum==target){
            arr[0]=start+1;
            arr[1]=end+1;
            return arr;
        }
        else if(sum>target){
            end--;
        }
        else{
            start++;
        }
      }
      return arr;
    }
};