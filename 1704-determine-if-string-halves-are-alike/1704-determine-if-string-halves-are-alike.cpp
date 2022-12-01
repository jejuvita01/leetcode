class Solution {
public:
    bool halvesAreAlike(string s) {
        int num = 0;
        for (int i = 0; i < s.length() / 2; i++)
            if (tolower(s[i]) == 'a' || tolower(s[i]) == 'e' || tolower(s[i]) == 'i' || tolower(s[i]) == 'o' || tolower(s[i]) == 'u')
                num++;
        for (int i = s.length() / 2; i < s.length(); i++) {
            if (tolower(s[i]) == 'a' || tolower(s[i]) == 'e' || tolower(s[i]) == 'i' || tolower(s[i]) == 'o' || tolower(s[i]) == 'u')
                num--;
            if (num < 0)
                return false;
        }
        return (num == 0);
    }
};