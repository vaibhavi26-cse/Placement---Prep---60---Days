#include<iostream>
#include<algorithm>
using namespace std;
class Solution {
public:
    int countFreq(vector<int>& arr, int target) {
        int first=-1,last=-1;
        int low=0, high=arr.size()-1;

        // First occurrence
        while(low<=high){
            int mid=low+(high-low)/2;
            if(arr[mid]>=target){
                if(arr[mid]==target) first=mid;
                high=mid-1;
            } else low=mid+1;
        }

        low=0; high=arr.size()-1;

        // Last occurrence
        while(low<=high){
            int mid=low+(high-low)/2;
            if(arr[mid]<=target){
                if(arr[mid]==target) last=mid;
                low=mid+1;
            } else high=mid-1;
        }

        if(first==-1) return 0;
        return last-first+1;
    }
};
