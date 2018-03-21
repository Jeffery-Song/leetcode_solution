# dp, from bottom to top
class Solution(object):
    def minimumTotal(self, triangle):
        """
        :type triangle: List[List[int]]
        :rtype: int
        """
        if not triangle: return 0
        n = len(triangle)
        minpath = [float('inf') for _ in range(n)]
        for i in range(n):
        	minpath[i] = triangle[n-1][i]
        for i in range(n-1)[::-1]:
        	for j in range(i+1):
        		minpath[j] = min(minpath[j], minpath[j+1]) + triangle[i][j]
        return minpath[0]