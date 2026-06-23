#include<vector>
#include<algorithm>
using namespace std;
class Solution {
  public:
    int missingNumber(vector<int> &arr) {
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int num=1;
        for(int i=0;i<n;i++){
            if(arr[i]==num&&arr[i]>=1){
                num++;
            }
        }
        return num;
        
    }
};