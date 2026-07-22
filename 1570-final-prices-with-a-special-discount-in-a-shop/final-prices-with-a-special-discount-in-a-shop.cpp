class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n=prices.size();
        vector<int>arr=prices;
        for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(prices[i]>=prices[j]){
                arr[i]=prices[i]-prices[j];
                break;
            }
            else {
          arr[i]=prices[i];
        
            }
        }
        }
        return arr;
    }};