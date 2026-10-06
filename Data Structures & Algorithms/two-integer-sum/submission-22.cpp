class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> prevNums;

        for (int i = 0; i < nums.size(); i++) {
            int diff = target - nums[i];
            if (prevNums.find(diff) != prevNums.end()) {
                return {prevNums[diff], i};
            }
            prevNums.insert({nums[i], i});
        }
        return {};
    }
};
