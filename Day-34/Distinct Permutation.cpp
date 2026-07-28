#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
  public:
  
    void generate(string &s, vector<bool> &used, string &curr,
                  vector<string> &ans) {

        if (curr.length() == s.length()) {
            ans.push_back(curr);
            return;
        }

        for (int i = 0; i < s.length(); i++) {

            if (used[i])
                continue;

            // Skip duplicate characters
            if (i > 0 && s[i] == s[i - 1] && !used[i - 1])
                continue;

            used[i] = true;
            curr.push_back(s[i]);

            generate(s, used, curr, ans);

            curr.pop_back();
            used[i] = false;
        }
    }

    vector<string> findPermutation(string &s) {

        sort(s.begin(), s.end());

        vector<string> ans;
        vector<bool> used(s.size(), false);
        string curr;

        generate(s, used, curr, ans);

        return ans;
    }
};