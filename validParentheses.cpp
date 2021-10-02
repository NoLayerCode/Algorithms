#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
	vector<char> stackVec;

	bool isValid(string s)
	{
		for (int i = 0; i < s.length(); i++)
		{
			if (s[i] == '(' || s[i] == '{' || s[i] == '[')
			{
				stackVec.push_back(s[i]);
				continue;
			}
			switch (s[i])
			{
			case ')':
				if (stackVec.back() == '[' || stackVec.back() == '{' || stackVec.empty())
					return false;
				stackVec.pop_back();
				break;
			case ']':
				if (stackVec.back() == '(' || stackVec.back() == '{' || stackVec.empty())
					return false;
				stackVec.pop_back();
				break;
			case '}':
				if (stackVec.back() == '[' || stackVec.back() == '(' || stackVec.empty())
					return false;
				stackVec.pop_back();
				break;
			}
		}
		if (stackVec.empty())
			return true;
		else
			return false;
	}
};

int main(int argc, char const *argv[])
{
	Solution S;
	cout << S.isValid("(){}}{");
	return 0;
}
