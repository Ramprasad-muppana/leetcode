class Solution:
    def removeDuplicates(self, s: str) -> str:
        l = []
        for i in s:
            if(l and l[-1] == i):
                l.pop()
            else:
                l.append(i)
        return ''.join(l)