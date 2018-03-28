class Solution(object):
    def minDistance(self, word1, word2):
        """
        :type word1: str
        :type word2: str
        :rtype: int
        """
        m = len(word1)
        n = len(word2)
        if not m: return n
        if not n: return m
        dis = list(range(n+1))
        pre_ij = 0
        for i in range(1, m+1):
            pre_ij = dis[0]
            dis[0] = i
            for j in range(1, n+1):
                replace = (word1[i-1] != word2[j-1])
                pre_ij, dis[j] = dis[j], min(dis[j]+1, dis[j-1]+1, pre_ij+replace)
        return dis[n]