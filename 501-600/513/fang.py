class Solution(object):
    def findBottomLeftValue(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        deep = 1
        max_deep = [1]
        leftmost = [-1]
        self.find(root,deep,max_deep,leftmost)
        return leftmost[0]
    
    def find(self,root,deep,max_deep,leftmost):
        if root is None: return
        if root.left is None and root.right is None:
            if leftmost[0] is -1:
                leftmost[0] = root.val
            if max_deep[0] < deep:
                leftmost[0] = root.val
                max_deep[0] = deep
        else:
           self.find(root.left,deep+1,max_deep,leftmost) 
           self.find(root.right,deep+1,max_deep,leftmost) 
            
            
    # best solution: BFS the tree from right to left, just output the last element's value. Use filter func to implement the BFS
   
    #def findBottomLeftValue(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
      # queue = [root]
      # for node in queue:
      #      queue += filter(None,[node.right,node.left])
      # return node.val
    
