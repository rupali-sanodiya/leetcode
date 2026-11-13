class Solution {
public:
    int mySqrt(int x) {
        int start=1;
        int end=x/2;
        if(x<2){
            return x;
        }
  while(start<=end){
    int mid=start+(end-start)/2;
    long long squre=(long long)mid*mid;
    if(squre==x){
        return mid;
    }
    else if(squre<x){
        start=mid+1;
    }
    else{
        end=mid-1;
    }
  }
  return end;
    }
};