#include <vector>
using namespace std;

class Solution {
public:
    int countPairs(vector<int> &arr, int target) {
        int left = 0;
        int right = arr.size() - 1;
        long long count = 0;

        while (left < right) {
            long long sum = 1LL * arr[left] + arr[right];

            if (sum < target) {
                left++;
            }
            else if (sum > target) {
                right--;
            }
            else {
                // If all remaining elements are the same
                if (arr[left] == arr[right]) {
                    long long n = right - left + 1;
                    count += (n * (n - 1)) / 2;
                    break;
                }

                long long leftCount = 1;
                long long rightCount = 1;

                // Count duplicates on the left
                while (left + 1 < right && arr[left] == arr[left + 1]) {
                    leftCount++;
                    left++;
                }

                // Count duplicates on the right
                while (right - 1 > left && arr[right] == arr[right - 1]) {
                    rightCount++;
                    right--;
                }

                count += leftCount * rightCount;
                left++;
                right--;
            }
        }

        return (int)count;
    }
};