#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
	int findValue(int n, int memo[])
	{
		int result;
		if (memo[n])
			return memo[n];
		if (n == 1 || n == 2)
			result = 1;
		else if (n <= 0)
			result = 0;
		else
			result = findValue(n - 3, memo) + findValue(n - 1, memo) + findValue(n - 2, memo);
		return result;
	}
	int tribonacci(int n)
	{
		// int memo[n + 1] = {0};
		// return findValue(n, memo);
		int *memo = new int[n + 1]{0};
		return findValue(n, memo);
	}
};

int main(int argc, char const *argv[])
{
	Solution S;
	cout << S.tribonacci(35);
	return 0;
}
