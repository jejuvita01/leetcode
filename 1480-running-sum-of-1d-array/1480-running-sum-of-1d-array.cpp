class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>::iterator it;
        it = nums.begin() + 1;
        for (int i = 1; i < nums.size(); i++) {
            *it = nums.at(i - 1) + nums.at(i);
            it++;
        }
        return nums;
    }
};