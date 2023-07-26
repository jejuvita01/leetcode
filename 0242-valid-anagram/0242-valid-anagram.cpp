class Solution {
public:
    bool isAnagram(string s, string t) {
        bool answer = true;

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        answer = (s.compare(t) == 0);
        
        return answer;
    }
};