#include<iostream>
#include<vector>
using namespace std;

int maxProfit(vector<int>& prices){

    int profit=0;
    int maxprofit=0;

    int n=prices.size();

    int min_buy_price=prices[0];

    for(int i=1;i<n;i++){

        if(prices[i]<min_buy_price){

            min_buy_price=prices[i];
        }

        profit=prices[i]-min_buy_price;

        if(profit>maxprofit){

            maxprofit=profit;
        }
    }

    return maxprofit;
}

int main(){

    vector<int> prices={7,1,5,3,6,4};

    cout<<"Maximum Profit: "<<maxProfit(prices);

    return 0;
}