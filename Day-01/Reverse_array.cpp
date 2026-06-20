#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:

    void reverseArray(vector<int>& arr) {

        int j = arr.size() - 1;

        for(int i = 0; i < arr.size()/2; i++) {

            swap(arr[i], arr[j]);
            j--;
        }
    }
};

int main() {

    vector<int> arr = {1,2,3,4,5};

    Solution obj;
    obj.reverseArray(arr);

    cout << "Reversed Array: ";

    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

    return 0;
}