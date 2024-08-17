class Solution {
public:
    bool wordPattern(string pattern, string s) {
       
        vector<string> words = split(s);
        if(pattern.size() != words.size()) return false;

        unordered_map<char,string> charToWord;
        unordered_map<string,char> wordToChar;

             for(int i=0; i< pattern.size() ; i++) {

                char ch  = pattern[i];
                string s = words[i];
                 
                 if(charToWord.find(ch) == charToWord.end()) {
                
                 if(wordToChar.find(s) != wordToChar.end())
                     return false;

             charToWord[ch] = s;
              wordToChar[s] = ch;

            }    else{
                   if(charToWord[ch] != s) 
                    return false;
                   
                }
           
             }

              return true;
    
    }
   
    private:
    
        vector<string> split( string s){
        
        vector<string> word;
        int start =0;
        for(int i=0; i<= s.size(); i++){
            if(i == s.size() || s[i] == ' '){
               word.push_back(s.substr(start, i-start));
               start = i+1;
            }
        }
       return word;
        }
};