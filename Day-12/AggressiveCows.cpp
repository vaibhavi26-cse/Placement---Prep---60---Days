#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool check(vector<int>& stalls, int k, int mid){
        int count = 1;
        int last = stalls[0];

        for(int i=1;i<stalls.size();i++){
            if(stalls[i]-last >= mid){
                count++;
                last = stalls[i];
            }
        }
        return count >= k;
    }

    int aggressiveCows(vector<int>& stalls, int k){
        sort(stalls.begin(), stalls.end());

        int low = 1;
        int high = stalls.back() - stalls[0];

        while(low<=high){
            int mid = low + (high-low)/2;

            if(check(stalls,k,mid))
                low = mid+1;
            else
                high = mid-1;
        }
        return high;
    }
};
