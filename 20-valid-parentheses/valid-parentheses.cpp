// class Solution {
// public:
//     bool isValid(string s) {
//         float check=false;
//         for(int i=0;i<s.length()-1;i++){
//             if(s[i]=='(' && s[i+1]==')'){
//                check= true;
//             }
//               if(s[i]=='[' && s[i+1]==']'){
//                check= true;
//             }
//               if(s[i]=='{' && s[i+1]=='}'){
//                check= true;
//             }

            
//         }
//    return check;
//     }
// };



class Solution {
public:
    bool isValid(string s) {
      bool find=true;
      while(find){
        find=false;
        for(int i=0;i<(int)s.length()-1;i++){
            if((s[i]=='(' && s[i+1]==')') || (s[i]=='{' && s[i+1]=='}')|| (s[i]=='[' && s[i+1]==']' )){
                s.erase(i,2);
                find=true;
                break;
            }
        }
     
      }
   return s.empty();
    }
    };