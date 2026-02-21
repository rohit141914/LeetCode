class Solution:
    def cal(self,n):
        return(n*(n-1))//2

    def interchangeableRectangles(self, rectangles: List[List[int]]) -> int:
        fr={}
        ratio=0
        for a in rectangles:
            ratio=a[0]/a[1]
            fr[ratio]=fr.get(ratio,0)+1
        
        ans=0
        for a,b in fr.items():
            if(b>1):
                ans+=self.cal(b)
        return ans