class Solution:
    def peakIndexInMountainArray(self, A: List[int]) -> int:
        l, r = 0, len(A)-1
        
        while True:
            mid = (l+r)//2
            if A[mid-1] < A[mid] > A[mid+1]: return mid
            elif A[mid+1] > A[mid]:
                l = mid
            else:
                r = mid