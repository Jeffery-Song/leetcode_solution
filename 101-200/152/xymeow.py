class Solution(object):
    def maxProduct(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        if not nums: return 0
        n = len(nums)
        if n == 1:
        	return nums[0]
        maxdp = nums[0]
        mindp = nums[0]
        result = nums[0]
        for i in range(1, n):
        	if nums[i] > 0:
	        	maxdp = max(maxdp*nums[i], nums[i])
	        	mindp = min(mindp*nums[i], nums[i])
	        else:
	        	tmp = maxdp
	        	maxdp = max(mindp*nums[i], nums[i])
	        	mindp = min(tmp*nums[i], nums[i])
	        if maxdp > result:
	        	result = maxdp
        return result