#include<climits>
#include<iostream>
#include<algorithm>
#include <string>
using namespace std;
class Solution {
  public:
    int myAtoi(string &s) {
        // code here
        int i=0;
        int n=s.length();
        //skip whitespaces
        while(i<n&&s[i]==' '){
            i++;
        }
        int sign=1;
        if(i<n&&s[i]=='-'){
            sign=-1;
            i++;
        }else if(i<n&& s[i]=='+'){
            i++;
        }
        long long num=0;
        while(i<n&& s[i]>='0'&& s[i]<='9'){
            int digit=s[i]-'0';
            if(num>(INT_MAX-digit)/10){
                if(sign==1){
                    return INT_MAX;
                }
                else if(sign==-1){
                    return INT_MIN;
                }
            }
            num=num*10+digit;
            i++;
        }
        return num*sign;
    }
};