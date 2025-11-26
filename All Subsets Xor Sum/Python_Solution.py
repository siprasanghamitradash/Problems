class Solution:
    def subsetXORSum(self, arr):
        n = len(arr)
        or_val = 0
        
        for x in arr:
            or_val |= x
        
        return or_val * (1 << (n - 1))
