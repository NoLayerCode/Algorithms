# 1578. Minimum Time to Make Rope Colorful (leetcode)

def minCost(colors: str, neededTime: list[int]) -> int:
	n = len(colors)
	cost = 0
	for index in range(1, n):
		if colors[index - 1] == colors[index]:
			cost = cost+min(neededTime[index-1], neededTime[index])
			if neededTime[index-1] > neededTime[index]:
				neededTime[index-1], neededTime[index] = neededTime[index],  neededTime[index-1]
	print(cost)


minCost('aaabbbabbbb', [3, 5, 10, 7, 5, 3, 5, 5, 4, 8, 1])
