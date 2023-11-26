class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> charToWord;
        unordered_set<string> usedWords; 
        vector<string> words;
        istringstream ss(s);
        string word;
        for (char c : pattern) {
            if (!(ss >> word)) {
                return false; 
            }
            if (charToWord.find(c) != charToWord.end()) {
                if (charToWord[c] != word) {
                    return false;
                }
            } else {
                if (usedWords.count(word)) {
                    return false;
                }
                charToWord[c] = word;
                usedWords.insert(word);
            }
        }
        if (ss >> word) {
            return false;
        }
        return true;
    }
};