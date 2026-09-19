class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int>ans;
        for(int i=0;i<operations.size();i++){

            if(operations[i]=="C"){
                ans.pop_back();
            
                        }
           else if(operations[i]=="D"){
                ans.push_back(2*ans.back());
            }

            else if(operations[i]=="+"){
      int first=ans.back();
      int second=ans[ans.size()-2];
       ans.push_back(first+second);
            }

            else {
                // converd string to number stoi
              ans.push_back(stoi(operations[i]));
            }
        }
            int total=0;
            for(int i=0;i<ans.size();i++){
                total+=ans[i];
            }
            return total;

        
      
    }
};