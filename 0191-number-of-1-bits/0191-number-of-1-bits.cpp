class Solution {
public:
    int hammingWeight(uint32_t n) {
        int answer = 0;
        int cal = 1;

        for (int i = 0; i < 32; i++) {
            if ((n) & cal == 1)
                answer++;
            n = n >> 1;
        }

        return answer;
    }
};