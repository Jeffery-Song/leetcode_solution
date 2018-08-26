static auto io_sync_off = []() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    return nullptr;
}();
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int idx_head = 0, idx_tail = nums.size();
        int idx_1 = 0;
        int tmp;
        while (idx_head != idx_tail) {
            // head is not verified, tail is verified.
            if (nums[idx_head] == 1) {
                idx_head ++;
            } else if (nums[idx_head] == 0) {
                if (idx_1 != idx_head) {
                    nums[idx_1] = 0;
                    nums[idx_head] = 1;
                }
                idx_1 ++;
                idx_head ++;
                // swap idx_1 and idx_head
                // idx_1 ++
                // idx_head++
            } else {
                idx_tail--;
                nums[idx_head] = nums[idx_tail];
                nums[idx_tail] = 2;
            }
        }
    }
};
