class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>arr(candies.size());
        int maximum=0;
        for(int i=0;i<candies.size();i++){
        maximum=max(maximum,candies[i]);
        }
        for(int i=0;i<candies.size();i++){
            if(candies[i]+extraCandies>=maximum){
                arr[i]=true;
            }
            else{
                arr[i]=false;
            }
        }
        return arr;

    }
};