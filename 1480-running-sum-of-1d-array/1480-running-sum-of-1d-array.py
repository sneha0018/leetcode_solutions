class Solution(object):
    def runningSum(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        a=0
        num=[]
        for i  in range(len(nums)):
            a+=nums[i]
            num.append(a)
        return num    


