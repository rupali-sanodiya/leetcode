class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minvalue=INT_MAX;
        int max=0;
        for(int price:prices){
            if(price<minvalue){
                minvalue=price;
            }
            else if(price-minvalue>max){
                max=price-minvalue;
            }
        }
        return max;

    }
};