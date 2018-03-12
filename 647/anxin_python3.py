class Solution:
    def countSubstrings(self, s):
        """
        :type s: str
        :rtype: int
        """
        ans=0
        for i in range(2*len(s)-1):
            left=i//2
            right=left+i%2
            while left!=-1 and right!=len(s) and s[left]==s[right]:
                ans+=1
                left-=1
                right+=1
        return ans
