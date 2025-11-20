class Solution(object):
    def hasPathSum(self, root, targetSum):
        if not root:
            return False

        # If this is a leaf node
        if not root.left and not root.right:
            return targetSum == root.val

        # Reduce target and go deeper
        newSum = targetSum - root.val

        return (
            self.hasPathSum(root.left, newSum) or
            self.hasPathSum(root.right, newSum)
        )
