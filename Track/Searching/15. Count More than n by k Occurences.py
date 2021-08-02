class Solution:
    def countOccurence(self,arr,n,k):
        import collections
        freqs = collections.Counter(arr)
        c = 0
        for u,v in freqs.items():
            if v > n/k:
                c += 1
        return c
