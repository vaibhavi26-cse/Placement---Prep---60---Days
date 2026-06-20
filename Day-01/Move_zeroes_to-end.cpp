#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    void pushZerosToEnd(vector<int>& arr) {
        
        int j = 0;

        for(int i = 0; i < arr.size(); i++) {
            if(arr[i] != 0) {
                arr[j] = arr[i];
                j++;
            }
        }

        while(j < arr.size()) {
            arr[j] = 0;
            j++;
        }
    }
};

int main() {

    vector<int> arr = {1,0,2,0,3,0,4};

    Solution obj;
    obj.pushZerosToEnd(arr);

    cout << "Array after pushing zeros: ";

    for(int i=0; i<arr.size(); i++) {
        cout << arr[i] << " ";
    }

    return 0;
}