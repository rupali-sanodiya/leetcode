class Solution {
public:
    string interpret(string command) {
        string sum="";
        for(int i=0;i<command.size();i++){
            if(command[i]=='G'){
                sum+="G";
            }
            else if(command[i]=='(' && command[i+1]==')'){
                sum+="o";
                i++;
            }
             else if(command[i]=='(' && command[i+1]=='a' && command[i+2]=='l' && command[i+3]==')'){
                sum+="al";
                i+=3;

            }
        }
        return sum;
    }
};