class Solution {
public:
    int minAddToMakeValid(string s) {
        int count=0;
        stack<char>str;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
            str.push(s[i]);
        }
        else {
            if(!str.empty()){
            str.pop();
        }
        else{
            count++;
        }
        }
        }
        return count+str.size();
    }
};