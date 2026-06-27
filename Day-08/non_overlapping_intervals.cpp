#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
  public:
    int minRemoval(vector<vector<int>> &intervals) {
        // code here
        sort(intervals.begin(),intervals.end());
        int count=0;
        int end=intervals[0][1];
        for(int i =1;i<intervals.size();i++){
            if(intervals[i][0]<end){
                count++;
                end=min(end,intervals[i][1]);
            }else{
                end=intervals[i][1];
            }
        }
        return count;
    }
};
