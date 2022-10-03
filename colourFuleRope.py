# 1578. Minimum Time to Make Rope Colorful (leetcode)

def minCost(colors: str, neededTime: list[int]) -> int:
	n = len(colors)
	cost = 0
	for index in range(0, n-1):
		if colors[index] == colors[index + 1]:
			cost = cost+neededTime[index] if neededTime[index] < neededTime[index+1]  else cost+neededTime[index+1]
	print(cost)


minCost('aabaa', [1, 2, 3, 4, 1])
