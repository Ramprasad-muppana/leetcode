class Solution:
    def average(self, salary: List[int]) -> float:
        a=max(salary)
        b=min(salary)
        c=(sum(salary)-a-b)/(len(salary)-2)
        return float("{:.5f}".format(c))