#include<iostream>
#include<vector>
using namespace std;

class Solution{
public:

    void rotateArr(vector<int>& arr, int n, int d){

        d=d%n;

        // Reverse first d elements
        int j=d-1;

        for(int i=0;i<j;i++){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            j--;
        }

        // Reverse remaining elements
        j=n-1;

        for(int i=d;i<j;i++){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            j--;
        }

        // Reverse whole array
        j=n-1;

        for(int i=0;i<j;i++){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            j--;
        }
    }
};

int main(){

    int n,d;

    cout<<"Enter size: ";
    cin>>n;

    vector<int> ans(n);
    cout<<"Enter elements: ";

    for(int i=0;i<n;i++){
        cin>>ans[i];
    }

    cout<<"Enter rotation value: ";
    cin>>d;

    Solution obj;

    obj.rotateArr(ans,n,d);

    cout<<"Rotated Array: ";

    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}