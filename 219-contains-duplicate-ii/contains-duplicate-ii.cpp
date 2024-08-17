class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> set;

        for(int i=0 ; i<nums.size(); i++){
           if(set.find(nums[i]) != set.end() && abs(i- set[nums[i]]) <= k){
            return true;
           }
        set[nums[i]] = i;

        }
        return false;
    }
};