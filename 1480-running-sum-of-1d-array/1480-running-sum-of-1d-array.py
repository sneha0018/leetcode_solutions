class Solution(object):
    def runningSum(self, nums):
        result = []
        running = 0
        for n in nums:
            running += n
            result.append(running)
        return result
