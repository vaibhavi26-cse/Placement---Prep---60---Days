#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
  public:
    // Function to search a given number in row-column sorted matrix.
    bool searchRowMatrix(vector<vector<int>> &mat, int x) {
        // code here
        int n=mat.size();
        int m=mat[0].size();
        for(int i=0;i<n;i++){
            if(x>=mat[i][0] && x<=mat[i][m-1]){
                int low=0;
                int high=m-1;
                
                while(low<=high){
                    int mid=low+(high-low)/2;
                    
                    if(mat[i][mid]==x){
                        return true;
                    }else if(mat[i][mid]<x){
                        low=mid+1;
                    }else{
                        high=mid-1;
                    }
                }
            }
        }
        return false;
    }
};