class Solution {
public:
    bool isHappy(int n) {
      unordered_set<int> seen;
      if(n==1){
        return true;
      }
        while(n!=1 && seen.find(n)==seen.end() ){
            seen.insert(n);
        int sum=0;
        while(n>0){
            int degit=n%10;
            sum+=degit*degit;
            n=n/10;
        }
        n=sum;
     if(n==1){
        return true;
     }
        }    
        return false;
       
    }
};