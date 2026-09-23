class Solution {
public:
    int titleToNumber(string columnTitle) {
long long count=0;
       for(char c:columnTitle){
        int val=c-'A'+1;
        count=(count*26)+val;
       }
       return count;
    }
};