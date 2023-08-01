class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        bool answer = true;

        for (int i = 0; i <= s.length() / 2; i++) {
            if (s[i] != s[s.length() - 1 - i])
                return false;
        }

        return answer;
    }
};