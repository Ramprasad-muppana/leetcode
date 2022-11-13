class Solution:
    def commonFactors(self, a: int, b: int) -> int:
        count, n = 0, 1
        while n <= min(a,b):
            if a % n == 0 and b % n == 0:
                count += 1
            n += 1
        return count