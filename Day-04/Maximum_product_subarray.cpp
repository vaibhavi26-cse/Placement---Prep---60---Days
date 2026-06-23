#include<vector>
using namespace std;
class Solution {
  public:
    int maxProduct(vector<int> &arr) {
       int n=arr.size();
       int prefix=1;
       int suffix=1;
       int ans = INT_MIN;
       if(n==1){
           ans=arr[0];
           return ans;
       }
       for(int i=0;i<n;i++){
           if(prefix==0){
               prefix=1;
           }
           if(suffix==0){
               suffix=1;
           }
           prefix=prefix*arr[i];
           suffix=suffix*arr[n-i-1];
           ans=max(ans,max(prefix,suffix));
       }
       return ans;
    }
       
};