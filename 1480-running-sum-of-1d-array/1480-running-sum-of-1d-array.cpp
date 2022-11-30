class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> new_nums;
        for (int i = 0; i < nums.size(); i++) {
            int sum = 0;
            for (int j = 0; j <= i; j++)
                sum += nums.at(j);
            new_nums.push_back(sum);
        }
        return new_nums;
    }
};