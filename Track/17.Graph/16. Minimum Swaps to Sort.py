class Solution:
    def minSwaps(self, nums):
        
        v = []
        for i in range(len(nums)):
            v.append((nums[i], i))
        
        v = sorted(v)
        vis = [False for i in range(len(nums))]
        cnt =  0

        for i in range(len(v)):
            if vis[i] or v[i][1] == i:
                continue
            else:
                c=0
                j=i                     
                while(vis[j]==False):
                    vis[j] = True
                    j = v[j][1]
                    c+=1
                cnt+=c-1
                   
        return cnt
