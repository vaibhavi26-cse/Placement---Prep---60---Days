#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int countTriplets(vector<int> &arr, int target) {
        int n = arr.size();
        int ans = 0;

        for (int i = 0; i < n - 2; i++) {

            int left = i + 1;
            int right = n - 1;

            while (left < right) {

                int sum = arr[i] + arr[left] + arr[right];

                if (sum < target) {
                    left++;
                }
                else if (sum > target) {
                    right--;
                }
                else {

                    if (arr[left] == arr[right]) {
                        int cnt = right - left + 1;
                        ans += (cnt * (cnt - 1)) / 2;
                        break;
                    }

                    int leftCount = 1;
                    int rightCount = 1;

                    while (left + 1 < right && arr[left] == arr[left + 1]) {
                        leftCount++;
                        left++;
                    }

                    while (right - 1 > left && arr[right] == arr[right - 1]) {
                        rightCount++;
                        right--;
                    }

                    ans += leftCount * rightCount;

                    left++;
                    right--;
                }
            }
        }

        return ans;
    }
};