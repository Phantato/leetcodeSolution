class Solution(object):
    def lengthOfLongestSubstring(self, s):
        """
        :type s: str
        :rtype: int
        """
        ans = 0
        sindex = 0
        length = len(s)
        dic = dict()
        for eindex in range(length):
            if dic.get(s[eindex], -1) != -1:
                ans = max(ans, eindex - sindex)
                sindex = max(sindex, dic[s[eindex]] + 1)
            dic[s[eindex]] = eindex
        return max(ans, length - sindex)
