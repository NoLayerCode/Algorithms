#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        unsigned int max = 0,count = 0; 
        for (auto& i : nums){
            if(i != 0){
              count++;
              if(max<count){
                max = count;
              }
            }else{
              count = 0;
            }
        }
        return max;
    }
};

int main()
{
  Solution s1;
   vector<int> arr = {1,1,0,1,1,1};
  cout<<s1.findMaxConsecutiveOnes(arr);
  return 0;
}
