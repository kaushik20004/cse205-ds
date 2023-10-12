class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {

   string str1 = "";
   string str2 = "";
   for(string s1 :word1)str1+=s1;
   for(string s2 :word2)str2+=s2;
    return str1==str2;
     
    }
};