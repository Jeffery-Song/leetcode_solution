static auto io_sync_off = []() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    return nullptr;
}();
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if ((nums1.size() + nums2.size()) % 2 == 1) {
            return core1(nums1, 0, nums2, 0, (nums1.size() + nums2.size()) / 2 + 1);
        }
        else {
            return (core1(nums1, 0, nums2, 0, (nums1.size() + nums2.size()) / 2) + core1(nums1, 0, nums2, 0, (nums1.size() + nums2.size()) / 2 + 1)) / 2.0;
        }

    }
private:
    int core1(vector<int>& nums1,
                 size_t b1,
                 vector<int>& nums2,
                 size_t b2,
                 size_t to_find) {
        if (b1 >= nums1.size()) {
            return nums2[b2 + to_find - 1];
        }
        if (b2 >= nums2.size()) {
            return nums1[b1 + to_find - 1];
        }
        if (to_find == 1) return nums1[b1] < nums2[b2] ? nums1[b1] : nums2[b2];
        if ((to_find >> 1) + b1 > nums1.size()) return core1(nums1, b1, nums2, b2 + to_find / 2, to_find - to_find / 2);
        if ((to_find >> 1) + b2 > nums2.size()) return core1(nums1, b1 + to_find / 2, nums2, b2, to_find - to_find / 2);
        if (nums1[b1 + to_find / 2 - 1] > nums2[b2 + to_find / 2 - 1]) {
            return core1(nums1, b1, nums2, b2 + to_find / 2, to_find - to_find / 2);
        }
        else {
            return core1(nums1, b1 + to_find / 2, nums2, b2, to_find - to_find / 2);
        }
        // find the to_find element

    }
};
