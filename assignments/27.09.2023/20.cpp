class Solution {
public:
   bool isValid(string s) {
    stack<char> parentheses;
    for (char c : s) {
        if (c == '(' || c == '[' || c == '{') {
            parentheses.push(c);
        } else {
            if (parentheses.empty())
                return false;
            char open = parentheses.top();
            parentheses.pop();
            if ((c == ')' && open != '(') ||
                (c == ']' && open != '[') ||
                (c == '}' && open != '{')) {
                return false;
            }
        }
    }
    return parentheses.empty();
}
};