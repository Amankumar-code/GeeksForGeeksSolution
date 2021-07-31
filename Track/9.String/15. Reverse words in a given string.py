class Solution:
    
    def reverseWords(self,S):
        tokens = s.split('.')
        rtokens = tokens[::-1]
        return '.'.join(rtokens)
