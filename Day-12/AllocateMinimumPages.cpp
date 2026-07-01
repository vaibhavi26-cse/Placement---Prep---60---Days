#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

class Solution {
public:
    int findPages(vector<int>& arr, int k){

        int n=arr.size();

        if(k>n)
            return -1;

        int low=*max_element(arr.begin(),arr.end());
        int high=accumulate(arr.begin(),arr.end(),0);

        while(low<=high){

            int mid=low+(high-low)/2;

            int students=1;
            int pages=0;

            for(int i=0;i<n;i++){

                if(pages+arr[i]<=mid)
                    pages+=arr[i];
                else{
                    students++;
                    pages=arr[i];
                }
            }

            if(students<=k)
                high=mid-1;
            else
                low=mid+1;
        }
        return low;
    }
};
