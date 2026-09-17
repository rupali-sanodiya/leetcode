class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string>arr;
        for(int i=0;i<words.size();i++){
            string current=words[i];
            int rownumber=0;
             bool check=true;
            for(int j=0;j<current.length();j++){
                   char c= tolower(current[j]);
                   int currentrow=0;
                if(c=='q' ||c=='w' || c=='e' || c=='r' || c=='t' ||c=='y' || c=='u' || c=='i'|| c=='o' ||c=='p'){
                      currentrow=1;
                }
                 else if(c=='a' ||c=='s' || c=='d' || c=='f' || c=='g' ||c=='h' || c=='j' || c=='k'|| c=='l' ){
                  currentrow=2;
                }
                 else if(c=='z' || c=='x' || c=='c' || c=='v' || c=='b' ||c=='n' || c=='m'){
                       currentrow=3;
                
            }
            if(j==0){
                rownumber=currentrow;
            }
            else if (currentrow!=rownumber){
                check=false;
                break;
            }
            }
            if(check && !current.empty()) {
                arr.push_back(current);
            }
        }
return arr;

    }
};