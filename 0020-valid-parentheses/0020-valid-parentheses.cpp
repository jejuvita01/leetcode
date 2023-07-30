class Solution {
public:
    bool isValid(string s) {
        stack<char> bracket;

        for (int i = 0; i < s.length(); i++) {
            switch (s[i]) {
                case '(': case '[': case '{':
                    bracket.push(s[i]);
                    break;
                case ')':
                    if (bracket.empty() || bracket.top() != '(')
                        return false;
                    else
                        bracket.pop();
                    break;
                case '}':
                    if (bracket.empty() || bracket.top() != '{')
                        return false;
                    else
                        bracket.pop();
                    break;
                case ']':
                    if (bracket.empty() || bracket.top() != '[')
                        return false;
                    else
                        bracket.pop();
                    break;
                default: break;
            }
        }

        return (bracket.size() == 0);
    }
};