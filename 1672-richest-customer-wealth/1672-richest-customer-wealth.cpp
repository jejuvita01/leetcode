class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max = 0;
        for (int row = 0; row < accounts.size(); row++) {
            int sum = 0;
            for (int col = 0; col < accounts[0].size(); col++)
                sum += accounts[row].at(col);
            if (sum > max)
                max = sum;
        }
        return max;
    }
};