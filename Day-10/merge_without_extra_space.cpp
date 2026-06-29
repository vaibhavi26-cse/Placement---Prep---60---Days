#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int nextGap(int gap){
            if(gap<=1)
                return 0;
            return (gap/2) + (gap%2);
        }
class Solution {
  public:
    void mergeArrays(vector<int>& a, vector<int>& b) {
        // code here
            int n=a.size();
            int m=b.size();
            
            int gap = nextGap(n+m);
            
            while(gap>0){
                int i,j;
                
                for(i=0;i+gap<n;i++){
                    if(a[i]>a[i+gap]){
                        swap(a[i],a[i+gap]);
                    }
                }
                for(j=(gap>n)?gap-n:0;
                    i<n && j<m;
                    i++,j++){
                        if(a[i]>b[j]){
                            swap(a[i],b[j]);
                        }
                }
                if(j<m){
                    for(j=0;j+gap<m;j++){
                        if(b[j]>b[j+gap]){
                            swap(b[j],b[j+gap]);
                        }
                    }
                }
            
                
                gap=nextGap(gap);
                
            
        }
    }
};