class Solution {
public:
    string toHex(int num) {
if(num==0){
    return "0";
}
unsigned int n=num;
string number="0123456789abcdef";
string result="";
while(n>0){
    int remender=n%16;
    result+=number[remender];
    n/=16;
}
reverse(result.begin(),result.end());
return result;
    }
};