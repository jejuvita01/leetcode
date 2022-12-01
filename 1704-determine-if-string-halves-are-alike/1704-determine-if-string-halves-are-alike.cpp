class Solution {
public:
    bool halvesAreAlike(string s) {
        string a = s.substr(0, s.length() / 2);
        string b = s.substr(s.length() / 2, s.length() / 2);
        int num = 0;
        for (int i = 0; i < s.length() / 2; i++)
            if (tolower(a[i]) == 'a' || tolower(a[i]) == 'e' || tolower(a[i]) == 'i' || tolower(a[i]) == 'o' || tolower(a[i]) == 'u')
                num++;
        for (int i = 0; i < s.length() / 2; i++) {
            if (tolower(b[i]) == 'a' || tolower(b[i]) == 'e' || tolower(b[i]) == 'i' || tolower(b[i]) == 'o' || tolower(b[i]) == 'u') {
                num--;
                if (num < 0)
                    return false;
            }
        }
        return (num == 0);
    }
};