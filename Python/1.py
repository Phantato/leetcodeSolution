class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        dic = dict()
        for index in range(len(nums)):
            diff = target - nums[index]
            if diff in dic :
                return [index, dic[diff]]
            else:
                dic[nums[index]] = index
