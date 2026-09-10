// class Solution {
// public:
//     int firstUniqChar(string s) {
//         int j=0;
//         int count=0;
//         for(int i=1;i<s.size();i++){
//             if(s[j]==s[i]){
//                 count++;
//                 j++;
//             }
//             else if(s[0]==s[1]){
//                 return -1;
//             }
//         }
//         return count;
//     }
// };

class Solution {
public:
    int firstUniqChar(string s) {
        for (int i = 0; i < s.length(); i++) {
         
            if (s.find(s[i]) == s.rfind(s[i])) {
                return i; 
            }
        }
        return -1;
    }
};