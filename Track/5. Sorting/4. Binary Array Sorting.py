class Solution:
    
    def binSort(self, arr, n):
        c0 = arr.count(0)
        c1 = arr.count(1)
        for i in range(c0):
            arr[i] = 0
        for i in range(c0,c0+c1):
            arr[i] = 1
