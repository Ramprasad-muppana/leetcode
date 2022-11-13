class Solution:
    def reverseWords(self, s: str) -> str:
        s=s.strip() 
        l=list(s.split(" ")) 
        l=l[::-1] 
        a=[] 
        for i in l: 
            if(i!=""): 
                a.append(i) 
        return(" ".join(a))