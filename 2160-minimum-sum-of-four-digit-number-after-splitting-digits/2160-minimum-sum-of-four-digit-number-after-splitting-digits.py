class Solution:
    def minimumSum(self, num: int) -> int:
        n=list(str(num))
        n=sorted(n)
        t=int(n[0]+n[2])+int(n[1]+n[3])
        return t