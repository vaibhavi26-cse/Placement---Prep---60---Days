#include <vector>
using namespace std;

class Solution {
public:
    int findEquilibrium(vector<int> &arr) {
        long long totalSum = 0;

        for (int num : arr)
            totalSum += num;

        long long leftSum = 0;

        for (int i = 0; i < arr.size(); i++) {
            totalSum -= arr[i];  // Now totalSum becomes rightSum

            if (leftSum == totalSum)
                return i;

            leftSum += arr[i];
        }

        return -1;
    }
};