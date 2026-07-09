#include <iostream>
#include <vector>
#include <unordered_map>
#include<algorithm>
using namespace std;
class Solution {
  public:
    int cntSubarrays(vector<int> &arr, int k) {
        unordered_map<int,int> mp;
        mp[0]=1;
        int sum=0;
        int count=0;
        for(int num:arr){
            sum+=num;
            if(mp.find(sum-k)!=mp.end()){
                count+=mp[sum-k];
            }
            mp[sum]++;
        }
        return count;
    }
    
    
};