#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int maxLen(vector<int> &a) {
        unordered_map<int, int> mp;
        int s = 0, ans = 0;

        for (int i = 0; i < a.size(); i++) {
            if (a[i] == 0)
                s += -1;
            else
                s += 1;

            if (s == 0)
                ans = i + 1;

            if (mp.find(s) != mp.end())
                ans = max(ans, i - mp[s]);
            else
                mp[s] = i;
        }

        return ans;
    }
};