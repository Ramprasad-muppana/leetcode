class Solution:
    def xorOperation(self, n: int, start: int) -> int:
        s = start
        for i in range(1,n):
            s=s^(start+2*i)
        return s