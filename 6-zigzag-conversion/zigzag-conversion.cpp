class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1 || numRows >= s.size()) return s;

        vector<string> rows(numRows);
         int currRows = 0;
         int goDownOrUP = 0;

          for(int i=0; i<s.size(); i++){
              rows[currRows]+= s[i];

              if(currRows == 0){
                goDownOrUP =1;
              }
              else if(currRows == numRows-1){
                goDownOrUP = 0;
              }

              if(goDownOrUP){
                currRows++;
              }else {
                currRows--;
              }
          }

          string finalString;
          for(int i=0; i<numRows; i++){
            finalString += rows[i];
          }
          return finalString;

    }
};

