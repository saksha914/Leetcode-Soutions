# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def averageOfLevels(self, root: Optional[TreeNode]) -> List[float]:
        q=collections.deque()
        res=[]
        q.append(root)
        s=0
        while q:
          level_sum=0
          level_count=0
          qlen=len(q)
          for i in range(qlen):
            node=q.popleft()
            level_sum+=node.val
            level_count+=1
            if node.left:
              q.append(node.left)
            if node.right:
              q.append(node.right)
          res.append(level_sum/level_count)
          
        return res