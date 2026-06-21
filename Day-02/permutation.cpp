#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& arr) {

        int n = arr.size();
        int index = -1;

        // Find breakpoint
        for(int i=n-2; i>=0; i--){
            if(arr[i] < arr[i+1]){
                index = i;
                break;
            }
        }

        // If no breakpoint exists
        if(index == -1){

            int j = n-1;

            for(int i=0; i<j; i++){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                j--;
            }

            return;
        }

        // Find next greater element and swap
        for(int i=n-1; i>index; i--){
            if(arr[i] > arr[index]){
                int temp = arr[i];
                arr[i] = arr[index];
                arr[index] = temp;
                break;
            }
        }

        // Reverse remaining part
        int j=n-1;

        for(int i=index+1; i<j; i++){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
};

int main() {

    int n;

    cout<<"Enter size of array: ";
    cin>>n;

    vector<int> arr(n);

    cout<<"Enter array elements: ";

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    Solution obj;

    obj.nextPermutation(arr);

    cout<<"Next Permutation: ";

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}