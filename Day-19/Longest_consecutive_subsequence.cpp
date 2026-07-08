#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
class Solution {
public:
    int longestConsecutive(vector<int>& arr) {
        unordered_set<int> st(arr.begin(), arr.end());

        int ans = 0;

        for (int num : arr) {

            // Check if it is the starting element
            if (st.find(num - 1) == st.end()) {

                int curr = num;
                int len = 1;

                while (st.find(curr + 1) != st.end()) {
                    curr++;
                    len++;
                }

                ans = max(ans, len);
            }
        }

        return ans;
    }
};
