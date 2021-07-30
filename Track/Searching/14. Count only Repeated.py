class Solution:
    def findRepeating(self,a,n):
        if (len(a) == 0):
            return [0, 0]
        s = 0
        e = len(a) - 1
        while (s < e):
            m = (s + e) // 2
     
            if (a[m] >= m + a[0]):
                s = m + 1
            else:
                e = m
        return [a[s], len(a) - (
                    a[len(a) - 1] - a[0])]
