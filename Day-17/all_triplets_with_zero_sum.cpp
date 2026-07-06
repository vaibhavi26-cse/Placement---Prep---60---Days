#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
class Solution {
  public:
    vector<vector<int>> findTriplets(vector<int> &arr) {
        // Code here
        int n=arr.size();
        vector<vector<int>> res;
        
        unordered_map<int, vector<int>> v;
        for(int i=0;i<n;i++){
            v[arr[i]].push_back(i);
        }
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int req=-(arr[i]+arr[j]);
                
                if(v.find(req)!=v.end()){
                    for(int k:v[req]){
                        if(k>j){
                            res.push_back({i,j,k});
                        }
                    }
                }
            }
        }
        return res;
    }
};