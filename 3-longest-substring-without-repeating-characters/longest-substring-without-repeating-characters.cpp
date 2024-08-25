class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        unordered_map<char,int> map;
        int L = 0;
        int maxLength = 0;

        for(int r=0; r<s.size(); r++){
            while(map[s[r]] != 0){// this letter is exist in map
                map[s[L]] = 0;// remove it
                L++;
            }
            map[s[r]]++;
            maxLength = max(maxLength , ((r-L)+1));
        }

        return maxLength;
        
    }
};