#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int getInt(char c)
    {
        switch (c)
        {
        case 'I':
            return 1;
        case 'V':
            return 5;
        case 'X':
            return 10;
        case 'L':
            return 50;
        case 'C':
            return 100;
        case 'D':
            return 500;
        case 'M':
            return 1000;
        default:
            return 0;
        }
    }

    int romanToInt(string s)
    {
        int result = 0;

        for (int i = 0; i < s.length(); ++i)
        {
            if (getInt(s[i]) < getInt(s[i + 1]))
                result -= getInt(s[i]);
            else
                result += getInt(s[i]);
        }
        return result;
    }
};

int main(int argc, char const *argv[])
{
    Solution S;
    cout << S.romanToInt("MCMXCIV");
    return 0;
}
