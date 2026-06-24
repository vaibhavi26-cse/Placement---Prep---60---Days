#include <iostream>
#include <climits>
#include <algorithm>
#include <string>

using namespace std;

class Solution {
  public:
    char nonRepeatingChar(string &s) {
        //  code here
        int freq[26]={0};
        for(int i=0;i<s.length();i++){
            freq[s[i]-'a']++;
        }
        for(int i=0;i<s.length();i++){
            if(freq[s[i]-'a']==1){
                return s[i];
            }
        }
        return '$';
    }
};