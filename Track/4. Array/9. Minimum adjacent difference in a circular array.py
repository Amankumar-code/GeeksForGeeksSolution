class Solution:
    def minAdjDiff(self,arr, n):
        min_dff = abs(arr[0]-arr[1])
        for i in range(1,len(arr)-1):
            if abs(arr[i]-arr[i+1]) < min_dff:
                min_dff = abs(arr[i]-arr[i+1])
            else:
                continue
        if min_dff > abs(arr[0]-arr[n-1]):
            min_dff = abs(arr[0]-arr[n-1])
        return min_dff
