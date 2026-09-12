class Solution {
public:
    string reverseWords(string s) {
     int n=s.length();
     string ans="";
     reverse(s.begin(),s.end());
     for(int i=0;i<n;i++){
        if(s[i]==' '){
            continue;
        }
        string words="";
        while(i<n && s[i]!=' '){
            words+=s[i];
            i++;
        }
        i--;
     
     reverse(words.begin(),words.end());
     if(words.length()>0){
        if(ans.length()>0){
 ans+=" ";
        }
       
     
     ans+=words;
     }
}
return ans;
    }
};