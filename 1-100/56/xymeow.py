class Solution(object):
    def merge(self, intervals):
        """
        :type intervals: List[Interval]
        :rtype: List[Interval]
        """
        if len(intervals) == 0:
            return []
        intervals.sort(key = lambda x: x.start)
        result = []
        result.append(intervals[0])
        for itv in intervals[1:]:
            tmp = result[-1]
            if tmp.end >= itv.start:
                tmp.end = max(itv.end, tmp.end)
                result[-1] = tmp
            else:
                result.append(itv)
        return result



        
