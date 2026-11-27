class Solution {
public:
    bool backspaceCompare(string s, string t) {
     stack<char>str1;
     stack<char>str2;
     for(int i=0;i<s.size();i++){

        if(s[i]=='#'){
            if(!str1.empty()){
                str1.pop();
            }
        }
            else{
                str1.push(s[i]);
            }
        
    
     }
     for(int i=0;i<t.size();i++){

        if(t[i]=='#'){
            if(!str2.empty()){
                str2.pop();
            }
        }
            else{
                str2.push(t[i]);
            }
        }
     
     if(str1==str2){
return true;
     }
else{
    return false;
}
    }
};