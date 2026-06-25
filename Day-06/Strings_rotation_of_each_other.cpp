#include<vector>
#include<algorithm>
#include<string>
#include<iostream>
using namespace std;
class Solution {
  public:
    bool areRotations(string &s1, string &s2) {
        // code here
        if(s1.length()!=s2.length()){
            return false;
        }
        string temp=s1+s1;
        int pos=temp.find(s2);
        if(pos==string::npos){
            return false;
        }
        return pos<s1.length();
    }
};