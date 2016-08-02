# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def addTwoNumbers(self, l1, l2):
        """
        :type l1: ListNode
        :type l2: ListNode
        :rtype: ListNode
        """
        head = ListNode(0)
        pre = head
        node1 = l1
        node2 = l2
        while node1 or node2:
            if pre.val >= 10:
                pre.next = ListNode(pre.val // 10)
                pre.val %= 10
            else:
                pre.next = ListNode(0)
            if node1:
                pre.next.val += node1.val
                node1 = node1.next
            if node2:
                pre.next.val += node2.val
                node2 = node2.next
            pre = pre.next
        if pre.val >= 10:
            pre.next = ListNode(pre.val // 10)
            pre.val %= 10
        return head.next
