#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int longestSubarray(vector<int>& arr, int k) {
        unordered_map<long long, int> firstIndex;
        long long prefixSum = 0;
        int maxLen = 0;

        for (int i = 0; i < arr.size(); i++) {
            prefixSum += arr[i];

            // If subarray starts from index 0
            if (prefixSum == k)
                maxLen = i + 1;

            // If (prefixSum - k) exists, update answer
            if (firstIndex.find(prefixSum - k) != firstIndex.end()) {
                maxLen = max(maxLen, i - firstIndex[prefixSum - k]);
            }

            // Store only first occurrence
            if (firstIndex.find(prefixSum) == firstIndex.end()) {
                firstIndex[prefixSum] = i;
            }
        }

        return maxLen;
    }
};