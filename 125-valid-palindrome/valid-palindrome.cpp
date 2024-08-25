class Solution {
public:
    bool isPalindrome(string s) {

        if(s.size()==NULL || s.size()==1) return true;
        
        int L = 0;
        int R = s.size()-1;

        while(L < R){
         if(!isalnum(s[L])){
           L++;
         }else if(!isalnum(s[R])){
            R--;
         }
         else {
           if(tolower(s[L++]) != tolower(s[R--])) return false;
         }
        
        }
    return true;
        
    }
};