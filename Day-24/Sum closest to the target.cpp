#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
class Solution {
  public:
    vector<int> sumClosest(vector<int>& arr, int target) {
        int n = arr.size();
        if (n < 2) return {};

        sort(arr.begin(), arr.end());

        int left = 0, right = n - 1;

        int bestDiff = INT_MAX;
        int bestAbsDiff = -1;
        vector<int> ans;

        while (left < right) {
            int sum = arr[left] + arr[right];
            int diff = abs(sum - target);
            int absDiff = arr[right] - arr[left];

            if (diff < bestDiff ||
               (diff == bestDiff && absDiff > bestAbsDiff)) {
                bestDiff = diff;
                bestAbsDiff = absDiff;
                ans = {arr[left], arr[right]};
            }

            if (sum < target)
                left++;
            else
                right--;
        }

        return ans;
    }
};