class Solution {
public:
    bool canJump(vector<int>& nums) {
        int lastIndex = 0;
       
        for(int i=0 ; i<nums.size() && lastIndex >= i; i++){

             if(lastIndex < i+nums[i]){
                  lastIndex = i+nums[i];
             }   
       if(lastIndex >= nums.size()-1){
        return true;
       }
        }
         return false;
    }
};