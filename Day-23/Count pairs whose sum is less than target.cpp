#include<algorithm>
#include<iostream>
#include<sort>
#include<vector>
using namespace std;

class Solution {
public:
    int countPairs(vector<int> &arr, int target) {

        sort(arr.begin(), arr.end());

        int left = 0;
        int right = arr.size() - 1;
        int count = 0;

        while (left < right) {

            if (arr[left] + arr[right] < target) {

                count += (right - left);
                left++;

            } else {

                right--;
            }
        }

        return count;
    }
};