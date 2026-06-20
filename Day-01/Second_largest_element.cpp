#include <iostream>
using namespace std;
int getSecondLargest(int *arr, int n) {

    if(n < 2)
        return -1;

    int max1 = arr[0];
    int max2 = arr[0];
    bool secondFound = false;

    for(int i = 1; i < n; i++) {

        if(arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
            secondFound = true;
        }

        else if(arr[i] != max1) {

            if(!secondFound || arr[i] > max2) {
                max2 = arr[i];
                secondFound = true;
            }
        }
    }

    if(!secondFound)
        return -1;

    return max2;
}
int main(){
   int arr[]={10,5,10};
   int result=getSecondLargest(arr,3);
   cout<<result;
}
