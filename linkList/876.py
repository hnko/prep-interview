# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def middleNode(self, start: ListNode) -> ListNode:
        if not start or not start.next: return start
        
        slow, fast = start, start.next
        
        while fast.next and fast.next.next:
            slow, fast = slow.next, fast.next.next
        
        return slow.next
            
        