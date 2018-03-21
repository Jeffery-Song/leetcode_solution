class Solution(object):
    def longestValidParentheses(self, s):
        """
        :type s: str
        :rtype: int
        """
        if not s: return 0
        n = len(s)
        stack = []
        result = 0
        for index, c in enumerate(s):
        	if c == '(':
        		stack.append((index, c))
        	elif c == ')' and stack and stack[-1][1] == '(':
        		stack.pop()
        	else:
        		stack.append((index, c))
        if not stack:
        	result = n
        else:
        	stack.append((n, ''))
        	stack.insert(0, (-1, ''))
        	r_idx = stack.pop()[0]
        	while stack:
        		l_idx = stack.pop()[0]
        		result = max(result, r_idx-l_idx-1)
        		r_idx = l_idx
        return result