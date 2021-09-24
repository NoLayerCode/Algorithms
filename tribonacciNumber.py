class Solution:
    memo = {0: 0, 1: 1, 2: 1}

    def tribonacci(self, n: int) -> int:
        if n in self.memo:
            return self.memo[n]
        else:
            self.memo[n] = self.tribonacci(
                n-1)+self.tribonacci(n-2)+self.tribonacci(n-3)
            return self.memo[n]


b = Solution()
print(b.tribonacci(37))
