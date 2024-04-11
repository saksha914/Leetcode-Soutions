# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isSubtree(self, root: Optional[TreeNode], subRoot: Optional[TreeNode]) -> bool:
      
      #Edge cases
      if not subRoot:
        return True
      if not root:
        return False
      if self.isSame(root,subRoot):
        return True
      
      return self.isSubtree(root.left,subRoot) or self.isSubtree(root.right,subRoot)
    
    
    
    
    def isSame(self,q,p):
      if not q and not p:
        return True
      if not q or not p or p.val!=q.val:
        return False
      
      return self.isSame(q.left,p.left) and self.isSame(q.right,p.right)