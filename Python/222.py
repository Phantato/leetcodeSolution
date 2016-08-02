# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def countNodes(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        count = 0
        while root:
            lch = root.left
            l = 0
            rch = root.right
            r = 0
            while lch:
                l += 1
                lch = lch.left
            while rch:
                r += 1
                rch = rch.left
            if l == r:
                count += 2 ** l
                root = root.right
            else:
                count += 2 ** r
                root = root.left
        return count
