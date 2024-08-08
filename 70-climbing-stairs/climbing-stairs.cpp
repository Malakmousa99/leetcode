class Solution {
public:
    int climbStairs(int n) {
        vector<int> total(n+1);

      total[0]=1;
      total[1]=1;

       for(int i=2; i<=n ; i++){
       total[i] =  total[i-1] +  total[i-2];
    
       }
           return  total[n];
    }
    
};