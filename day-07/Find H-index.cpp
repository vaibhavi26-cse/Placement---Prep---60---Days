#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
  public:
    int hIndex(vector<int>& citations) {
        // code here
        int n=citations.size();
        sort(citations.begin(),citations.end(),greater<int>());
        int h=0;
        for(int i=0;i<n;i++){
            if(citations[i]>=i+1){
                h++;
            }else{
                break;
            }
        }
        return h;
    }
};