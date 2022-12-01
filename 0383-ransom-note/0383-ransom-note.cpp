class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int mag[26] = { 0 };
        for (int i = 0; i < magazine.length(); i++)
            mag[magazine[i] - 'a']++;
        for (int i = 0; i < ransomNote.length(); i++) {
            if (mag[ransomNote[i] - 'a'] == 0)
                return false;
            else
                mag[ransomNote[i] - 'a']--;
        }
        return true;
    }
};