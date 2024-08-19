class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_set<int> set(nums.begin(), nums.end());
        int maxLength = 0;
        
        for(int i=0; i<nums.size(); i++){
            if(!set.count(nums[i]-1)){
                int length =1;

                while(set.count(nums[i]+length)){
                    length++;
                }
                 maxLength = max(maxLength, length);
            }
          
        }
    return   maxLength;
    }
};