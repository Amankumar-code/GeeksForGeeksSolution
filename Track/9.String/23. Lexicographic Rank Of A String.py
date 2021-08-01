class Solution:
    def findRank(self,s):
        import itertools
        all_ps = sorted([''.join(i) for i in itertools.permutations(s)])
        if len(set(s)) != len(s):
            return 0
        else:
            return all_ps.index(s) + 1
