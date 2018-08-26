class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> result = {};
        int to_verify, size = nums.size();
        nums.push_back(1);
        for (size_t i = 0; i < size; i++) {
            to_verify = abs(nums[i]);
            if (nums[to_verify] < 0) {
                result.push_back(to_verify);
            } else {
                nums[to_verify] = -nums[to_verify];
            }
        }
        return result;
    }
};
