
class Solution {
public:
    struct TrieNode {
        TrieNode* children[26] = {nullptr};
        string word = "";
    };

    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
       
        TrieNode* root = buildTrie(words);
        vector<string> result;

        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[0].size(); j++) {
                dfs(board, i, j, root, result);
            }
        }
        return result;
    }

private:
  TrieNode* buildTrie(vector<string>& words) {
    TrieNode* root = new TrieNode();
    for (int i = 0; i < words.size(); i++) {
        string word = words[i];
        TrieNode* node = root;
        for (int j = 0; j < word.size(); j++) {
            char c = word[j];
            int index = c - 'a';
            if (node->children[index] == nullptr) {
                node->children[index] = new TrieNode();
            }
            node = node->children[index];
        }
        node->word = word;
    }
    return root;
}


    void dfs(vector<vector<char>>& board, int i, int j, TrieNode* node, vector<string>& result) {
        char c = board[i][j];
        if (c == '#' || node->children[c - 'a'] == nullptr) return;

        node = node->children[c - 'a'];
        if (!node->word.empty()) {
            result.push_back(node->word);
            node->word = ""; 
        }

        board[i][j] = '#'; 
        if (i > 0) dfs(board, i - 1, j, node, result);
        if (j > 0) dfs(board, i, j - 1, node, result);
        if (i < board.size() - 1) dfs(board, i + 1, j, node, result);
        if (j < board[0].size() - 1) dfs(board, i, j + 1, node, result);

        board[i][j] = c; 
    }  
};
