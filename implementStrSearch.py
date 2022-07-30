class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        if needle:
            return haystack.find(needle)
        else:
            return 0

S = Solution()
print(S.strStr('hello','asd'))