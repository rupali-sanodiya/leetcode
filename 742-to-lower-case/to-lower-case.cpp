class Solution {
public:
    string toLowerCase(string s) {
        for(int i=0;i<s.size();i++){
            if(s[i]!=tolower(s[i])){
 s[i]=tolower(s[i]);
            }
           
        }
        return s;
    }
};