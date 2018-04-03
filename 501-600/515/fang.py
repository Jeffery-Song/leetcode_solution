# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):# BFS
    def largestValues(self, root):
        """
        :type root: TreeNode
        :rtype: List[int]
        """
        max_list =[]
        queue = [root]
        while any(queue):
            max_list.append(max(x.val for x in queue))
            temp_queue = []
            for node in queue:
                temp_queue += list(filter(None,[node.right,node.left]))
            queue = temp_queue
            
        return max_list
