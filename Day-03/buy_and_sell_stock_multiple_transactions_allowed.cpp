#include<iostream>
#include<vector>
using namespace std;

int maxProfit(vector<int>& prices){

    int n = prices.size();
    int profit = 0;

    for(int i=0;i<n-1;i++){

        if(prices[i] < prices[i+1]){

            int difference = prices[i+1]-prices[i];
            profit += difference;
        }
    }

    return profit;
}

int main(){

    vector<int> prices={100,180,260,310,40,535,695};

    cout<<"Maximum Profit: "<<maxProfit(prices);

    return 0;
}