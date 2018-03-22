class Solution(object):
    def combinationSum2(self, candidates, target):
        """
        :type candidates: List[int]
        :type target: int
        :rtype: List[List[int]]
        """
        if len(candidates) == 0 or not target:
			return []
        candidates.sort()
        result = []
        self.dfs(candidates, target, result, [], 0)
        return result

    def dfs(self, candidates, target, result, comb, index):
    	if target == 0:
    		result.append(comb)
    	elif target < 0:
    		return
    	else:
    		for idx in range(index, len(candidates)):
    			if candidates[idx] > target: break
    			if idx > index and candidates[idx] == candidates[idx-1]: continue
    			self.dfs(candidates, target-candidates[idx], result, comb+[candidates[idx]], idx+1)