# use dfs to search results
class Solution(object):
	def combinationSum(self, candidates, target):
		if len(candidates) == 0 or not target:
			return []
		result = []
		candidates.sort()
		self.dfs(candidates, target, result, [], 0)
		return result

	def dfs(self, candidates, target, result, comb, index):
		if target == 0:
			result.append(comb)
			return
		elif target < 0:
			return
		else:
			for i in range(index, len(candidates)):
				if candidates[i] > target: break
				self.dfs(candidates, target-candidates[i], result, comb + [candidates[i]], i)
