# Use dp to solve this problem, it is similar to the matrix chain multiplication: 
# Soppose mc[i][j] is the maximum number of coins we can get between the ith and jth balloons, 
# and the kth balloon is the last bursted balloon in the range of [i, j], so we can get the reccurance:
# mc[i][j] = max{mc[i][k-1] + mc[k+1][j] + nums[i-1] * nums[k] * nums[j+1] | i<=k<=j}

# The time complexity is O(n^3)

class Solution:
    def maxCoins(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        n = len(nums)
        nums = nums + [1]
        mc = [[0 for _ in range(n+1)] for _ in range(n+1)]
        for l in range(1, n+1):
            for i in range(0, n-l+1):
                j = i + l - 1
                tmp = 0
                for k in range(i, j+1):
                    tmp = max(tmp, mc[i][k-1] + mc[k+1][j] + nums[i-1]*nums[k]*nums[j+1])
                mc[i][j] = tmp
        return mc[0][n-1]
