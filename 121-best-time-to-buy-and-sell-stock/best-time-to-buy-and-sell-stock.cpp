class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int maxPro = 0;
      int minPrice = prices[0];

      for(int i=0 ; i<prices.size() ; i++){
        if(prices[i] < minPrice){
           minPrice = prices[i];
        }
        
        int profit = prices[i]-minPrice; 
        if(profit > maxPro )
       maxPro  = profit;
      }
       return maxPro;  
    }
};