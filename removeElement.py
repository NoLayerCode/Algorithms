class Solution:
    def removeElement(self, nums: list[int], val: int) -> int:
        i = 0
        while i < len(nums):
            if nums[i] == val:
                nums.pop(i)
            else:
                i+=1
        return len(nums)

nums = [3,2,2,3]
S = Solution()
print(S.removeElement(nums, 3))