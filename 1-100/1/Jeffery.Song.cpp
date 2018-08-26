static auto io_sync_off = []() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    return nullptr;
}();
#include <unordered_map>
using std::unordered_map;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, size_t> adder_idx;
        for (size_t i = 0; i < nums.size(); i++) {
            if (adder_idx.find(nums[i]) != adder_idx.end()) {
                vector<int> result;
                result.push_back(adder_idx[nums[i]]);
                result.push_back(i);
                return result;
            } else {
                adder_idx[target - nums[i]] = i;
            }
        }
    }
};
