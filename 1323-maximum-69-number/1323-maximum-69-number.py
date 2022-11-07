class Solution:
    def maximum69Number (self, num: int) -> int:
        num=str(num)
        l=[]
        for i in num:
            l.append(i)
        for i in range(len(l)):
            if l[i]!='9':
                l[i]='9'
                return "".join(l)
        return int(num)