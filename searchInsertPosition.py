
def quickSerch(nums: list[int], target: int, ub: int, lb: int) -> int:
    mid = (ub+lb)//2
    if(nums[mid] == target):
        return mid
    elif (nums[mid] < target):
        quickSerch(nums, target, mid, lb)
    elif (nums[mid] > target):
        quickSerch(nums, target, ub, mid)
    else:
        return mid+1


def searchInsert(nums: list[int], target: int) -> int:
    if(nums[-1] < target):
        return len(nums)
    else:
    	return quickSerch(nums, target, len(nums), 0)


print(searchInsert([1, 3, 5, 6], 7))
