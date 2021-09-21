#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    vector<int> vec{3, 2, 4};
    int target = 6;
    vector<int>::iterator it;
    vector<int> value;
    for (int i = 0; i != vec.size(); ++i)
    {
        it = find(vec.begin() + i + 1, vec.end(), (target - vec[i]));
        if (it != vec.end())
        {

            if (i != it - vec.begin())
            {
                // value.push_back(i);
                // value.push_back(it - vec.begin());
                cout << i << " " << it - vec.begin();
                break;
            }
        }
    }
    return 0;
}