class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int r, m;
        int same;

        sort(ransomNote.begin(), ransomNote.end());
        sort(magazine.begin(), magazine.end());
        
        r = m = same = 0;
        for (; r < ransomNote.length() && m < magazine.length();) {
            if (m < magazine.length() && ransomNote[r] == magazine[m]) {
                r++;
                m++;
                same++;
            }
            else
                m++;
        }
        return (same == ransomNote.length());
    }
};