#include<iostream>
#include<vector>
using namespace std;

int maxProfit(vector<int> arr){
    int mini=arr[0];
    int profit=0;
    for(int i=1;i<arr.size();i++){
        int diff=arr[i]-mini;
        mini=min(mini,arr[i]);
        profit=max(profit,diff);
    }
    return profit;
}
 
int main(){
    vector<int> arr{7,1,2,6,5,4};
    cout<<maxProfit(arr)<<endl;
 
 
 
 
 return 0;
}