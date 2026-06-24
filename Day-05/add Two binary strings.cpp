#include <iostream>
#include <climits>
#include <algorithm>
#include <string>

using namespace std;
class Solution {
  public:
    string addBinary(string& s1, string& s2) {
        // your code here
        int i = s1.length()-1;
        int j = s2.length()-1;
        int carry=0;
        string ans="";
        while(i>=0 || j>=0 || carry){
            int sum=carry;
            if(i>=0){
                sum+=s1[i]-'0';
                i--;
            }
            if(j>=0){
                sum+=s2[j]-'0';
                j--;
            }
            ans+=(sum%2)+'0';
            carry=sum/2;
        }
        reverse(ans.begin(),ans.end());
        int k=0;
        while(k<ans.length() && ans[k]=='0'){
            k++;
        }
        return ans.substr(k);
    }
};