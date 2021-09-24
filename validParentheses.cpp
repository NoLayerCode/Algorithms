#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
	// int validClose()

	bool isValid(string s)
	{
		int x = 1;
		for (int i = 1; i < s.length(); i++)
		{
			if (s[i] == '(' || s[i] == '{' || s[i] == '[')
			{
				x++;
				continue;
			}
			switch (s[i])
			{
			case ')':
				cout << s[x] << " :s[x-1] " << s[i] << " :s[i]" << endl;
				if (s[i - 1] == '[' || s[i - 1] == '{')
					return false;
				x--;
				break;
			case ']':
				cout << s[x] << " :s[x-1] " << s[i] << " :s[i]" << endl;
				if (s[i - 1] == '(' || s[i - 1] == '{')
					return false;
				x--;
				break;
			case '}':
				cout << s[x] << " :s[x-1] " << s[i] << " :s[i]" << endl;
				if (s[i - 1] == '[' || s[i - 1] == '(')
					return false;
				x--;
				break;
			}
			if (x < 0)
				return false;

			cout << x << " " << s[i] << endl;
		}

		if (x == 0)
			return true;
		else
			return false;
	}
};

int main(int argc, char const *argv[])
{
	Solution S;
	cout << S.isValid("({{{{}}}))");
	return 0;
}
