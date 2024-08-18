class Solution {
public:
    bool closeStrings(string word1, string word2) {

        if(word1.size() != word2.size()) return false;

        unordered_set<char> set1, set2;
        vector<int> freq1(26,0);
        vector<int> freq2(26,0);
      
        for(int i=0; i<word1.size(); i++){
           freq1[word1[i]-'a']++;
           set1.insert(word1[i]);
        }

        for(int i=0; i<word2.size(); i++){
            freq2[word2[i]-'a']++;
            set2.insert(word2[i]);
        }

       if (set1 != set2) return false;

        sort(freq1.begin(), freq1.end());
        sort(freq2.begin(), freq2.end());

        return freq1==freq2;
        
    }
};
