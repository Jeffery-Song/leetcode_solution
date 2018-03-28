class Solution(object):
    def canJump(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        if not nums: return False
        maxindex = len(nums)-1
        for index in range(0, len(nums))[::-1]:
            if nums[index] >= maxindex-index:
                maxindex = index
        return True if maxindex == 0 else False