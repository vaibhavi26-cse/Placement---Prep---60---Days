#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;
class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        // Code here
        unordered_map<int,int> mp;
        int count=0;
        
        for(int num:arr){
            int complement=target-num;
            if(mp.find(complement)!=mp.end()){
                count+=mp[complement];
            }
            mp[num]++;
        }
        return count++;
    }
};