#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
class Solution {
  public:
    vector<int> intersect(vector<int>& a, vector<int>& b) {
        // code here
        unordered_set<int> st(a.begin(),a.end());
        vector<int> ans;
        for(int x:b){
            if(st.find(x)!=st.end()){
                ans.push_back(x);
                st.erase(x);
            }
        }
        return ans;
    }
};