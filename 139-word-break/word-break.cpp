class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {

        int length = s.size();
         vector<bool> dp(length+1 , false);
         dp[0] = true;
         
         unordered_set<string> wordSet(wordDict.begin(), wordDict.end());

         for(int i=1 ; i<= length ; i++){
            for(int j=0; j<i; j++){

                string word = s.substr(j, i - j);
                 if(dp[j] && wordSet.count(word)> 0){
                    dp[i] = true;
                    break;
                }
            }
         }
         return dp[length];
    }
};