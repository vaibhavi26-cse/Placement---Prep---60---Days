#include <iostream>
#include <vector>
#include <unordered_map>
#include<algorithm>
using namespace std;
class Solution {
public:
    vector<vector<string>> anagrams(vector<string>& arr) {

        unordered_map<string, vector<string>> mp;

        for (string str : arr) {

            string temp = str;
            sort(temp.begin(), temp.end());

            mp[temp].push_back(str);
        }

        vector<vector<string>> ans;

        for (auto it : mp) {
            ans.push_back(it.second);
        }

        return ans;
    }
};