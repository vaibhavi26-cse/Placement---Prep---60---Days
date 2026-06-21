#include<iostream>
#include<vector>
using namespace std;

class Solution{
public:

    vector<int> findMajority(vector<int>& arr){

        int cnt1=0,cnt2=0;
        int num1=-1,num2=-1;

        int n=arr.size();

        // Find candidates
        for(int i=0;i<n;i++){

            if(cnt1==0 && arr[i]!=num2){
                cnt1=1;
                num1=arr[i];
            }

            else if(cnt2==0 && arr[i]!=num1){
                cnt2=1;
                num2=arr[i];
            }

            else if(arr[i]==num1){
                cnt1++;
            }

            else if(arr[i]==num2){
                cnt2++;
            }

            else{
                cnt1--;
                cnt2--;
            }
        }

        // Verify candidates
        cnt1=0;
        cnt2=0;

        for(int i=0;i<n;i++){

            if(arr[i]==num1)
                cnt1++;

            else if(arr[i]==num2)
                cnt2++;
        }

        if(cnt1>n/3 && cnt2>n/3){

            vector<int> ans(2);

            if(num1<num2){
                ans[0]=num1;
                ans[1]=num2;
            }
            else{
                ans[0]=num2;
                ans[1]=num1;
            }

            return ans;
        }

        else if(cnt1>n/3){

            vector<int> ans(1);
            ans[0]=num1;
            return ans;
        }

        else if(cnt2>n/3){

            vector<int> ans(1);
            ans[0]=num2;
            return ans;
        }

        return {};
    }
};

int main(){

    int n;

    cout<<"Enter size: ";
    cin>>n;

    vector<int> arr(n);

    cout<<"Enter elements: ";

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    Solution obj;

    vector<int> ans=obj.findMajority(arr);

    cout<<"Majority Elements: ";

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}