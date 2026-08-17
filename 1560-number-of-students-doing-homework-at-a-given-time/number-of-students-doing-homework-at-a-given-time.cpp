class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        int count=0;
            for(int j=0;j<endTime.size();j++){
                if(startTime[j]<=queryTime && endTime[j]>=queryTime){
                    count++;
                }
              
            }

        
        return count;
    }
};