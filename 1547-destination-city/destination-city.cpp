class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
     vector<string>str;
       for(int i=0;i<paths.size();i++){
        str.push_back(paths[i][0]);
       }

       for(int i=0;i<paths.size();i++){
        string dest=paths[i][1];
        bool found=false;
       for(int j=0;j<str.size();j++){
        if(dest==str[j]){
            found=true;
            break;
        }
       }
       if(found==false){
        return dest;
       }
       }
       return "";
    }
};