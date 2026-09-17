class Solution {
public:
    bool isIsomorphic(string s, string t) {
        bool check=true;
        if(s.length()!=t.length()){
            check= false;
        }
        vector<int>indexs(256,0);
        vector<int>indext(256,0);
          int j=0;
    for(int i=0;i<s.length();i++){
        if(indexs[s[i]]!=indext[t[i]]){
            check= false;
           
        }
        indexs[s[i]]=i+1;
        indext[t[i]]=i+1;

    }
    return check;
    }
};