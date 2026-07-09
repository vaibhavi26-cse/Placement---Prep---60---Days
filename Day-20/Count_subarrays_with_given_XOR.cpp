#include <iostream>
#include <vector>
#include <unordered_map>
#include<algorithm>
using namespace std;
class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {

        unordered_map<int, int> mp;

        mp[0] = 1;

        int xr = 0;
        long count = 0;

        for (int num : arr) {

            xr ^= num;

            if (mp.find(xr ^ k) != mp.end()) {
                count += mp[xr ^ k];
            }

            mp[xr]++;
        }

        return count;
    }
};