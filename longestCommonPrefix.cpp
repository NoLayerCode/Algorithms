#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution
{
public:
	string longestCommonPrefix(vector<string> &strs)
	{
		int len = strs[0].length();
		for (int i = 1; i < strs.size(); i++)
		{
			int cl = 0;
			for (int j = 0; j < strs[0].length() && strs[i].length(); j++)
			{
				if (strs[0][j] == strs[i][j])
					cl++;
				else
					break;
			}
			len = min(len, cl);
		}
		return strs[0].substr(0, len);
	}
};

int main(int argc, char const *argv[])
{
	vector<string> v{"flower", "flow", "flight"};
	Solution S;
	cout << S.longestCommonPrefix(v);
	return 0;
}