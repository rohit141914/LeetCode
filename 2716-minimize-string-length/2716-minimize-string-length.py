class Solution:
    def minimizedStringLength(self, s: str) -> int:
        di={}
        for i in s:
            di[i]=di.get(i,0)+1
        return len(di.items())