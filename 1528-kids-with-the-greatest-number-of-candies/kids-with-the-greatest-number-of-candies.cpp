class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxCandies = candies[0] ;
        vector<bool> result(candies.size());
       for(int i=0 ; i<candies.size() ; i++){
        if(candies[i]> maxCandies){
            maxCandies = candies[i];
        }

       }

       for(int i = 0 ; i<candies.size() ; i++){
          result[i] = candies[i] + extraCandies >= maxCandies;
       }
       return result;
    }
};