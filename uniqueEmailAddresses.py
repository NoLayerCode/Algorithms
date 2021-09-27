class Solution:
	def numUniqueEmails(self, emails: list[str]) -> int:
		result = set()
		for i in emails:
			temp = i.split('@')
			location = temp[0].find('+')
			print(location)
			if location != -1:
				temp[0] = temp[0][:location]
			temp[0] = temp[0].replace('.', '')
			result.add(temp[0]+'@'+temp[1])
		print(result)
		return len(result)


S = Solution()
print(S.numUniqueEmails(
	["a@leetcode.com", "b@leetcode.com", "c@leetcode.com"]))
