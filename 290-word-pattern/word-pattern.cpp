class Solution {
public:
    bool wordPattern(string pattern, string s) {
        bool check=true;
       stringstream ss(s);
        string word;
        vector<string> words;
        while (ss >> word) {
            words.push_back(word);
        }

         unordered_map<char, int> patternIndex;
        unordered_map<string, int> wordIndex;

        if(pattern.length()!=words.size()){
          return false;
        }

for(int i=0;i<pattern.length();i++){
    if(wordIndex[words[i]]!= patternIndex[pattern[i]]){
        check=false;
    }
   wordIndex[words[i]]=i+1;
    patternIndex[pattern[i]]=i+1;
}
return check;
    }
};