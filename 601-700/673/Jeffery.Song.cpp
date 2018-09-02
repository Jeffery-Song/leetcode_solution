static auto io_sync_off = []() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    return nullptr;
}();
class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        vector<int> len, cnt;
        int res_max = 0, res_cnt = 0;
        for (size_t i = 0; i < nums.size(); i++) {
            // len.push_back(0);
            int max_len = 0;
            int cnt_j = 1;
            for (size_t j = 0; j < i; j++) {
                if (nums[j] < nums[i]) {
                    if (max_len < len[j]) {
                        max_len = len[j];
                        cnt_j = cnt[j];
                    } else if (max_len == len[j]) {
                        cnt_j += cnt[j];
                    }
                }
            }
            len.push_back(max_len + 1);
            cnt.push_back(cnt_j);
            if (max_len + 1 > res_max) {
                res_max = max_len + 1;
                res_cnt = cnt_j;
            } else if (max_len + 1 == res_max) {
                res_cnt += cnt[i];
            }

        }
        return res_cnt;
    }
};
