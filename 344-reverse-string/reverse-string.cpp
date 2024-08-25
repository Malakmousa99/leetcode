class Solution {
public:
    void reverseString(vector<char>& s) {
      int first =0;
      int final = s.size()-1;
      
      while(first < final){
        swap(s[final], s[first]);
        first++;
        final--;
      }
    }
};