class Solution(object):
    def groupAnagrams(self, strs):
        """
        :type strs: List[str]
        :rtype: List[List[str]]
        """
        if not strs:
            return []
        result = {}
        for str in strs:
            key = ''.join(sorted(str))
            result[key] = result.get(key, []) + [str]
        return list(result.values())