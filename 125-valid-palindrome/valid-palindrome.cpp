class Solution {
public:
    bool isPalindrome(string s) {
        string str="";
        string str1="";
       for(int i = 0; i < s.size(); i++) {
            if(isalnum(s[i])) {
                str += tolower(s[i]);
            }
        }
            for(int i=str.size()-1;i>=0;i--){
             str1+= str[i];
            }
        
        if(str==str1){
            return true;
        }
        else{
        return false;
        }
    }
};