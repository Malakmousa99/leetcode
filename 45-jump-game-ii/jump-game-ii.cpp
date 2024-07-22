class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        int lastIndex = 0;
        int minNumber = 0;
        int endJump = 0; 
      if(n==1){
        return 0;
      }
        for(int i = 0; i<n ; i++){
          if(lastIndex < i+nums[i]){
            lastIndex = i+nums[i];
          }
          if(i == endJump){
            minNumber++;
            endJump = lastIndex;
            if(lastIndex >= n-1){
                break;
            }
          }
        }
       return minNumber;
    }
};