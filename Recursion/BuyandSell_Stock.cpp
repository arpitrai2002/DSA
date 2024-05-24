#include<iostream>
#include<vector>
using namespace std;

void REbuyandSell(vector<int>& a,int i,int& minbuy,int& profit){
    //baseCase
    if(i==a.size()){
        return;
    }

    if(a[i]<minbuy) minbuy=a[i];
    int diff=a[i]-minbuy;
    if(diff>profit) profit=diff;
    return REbuyandSell(a,i+1,minbuy,profit);
}

int buyandSell(vector<int> a){
    int minbuy=a[0];
    int profit=0;
    for(int i=0;i<a.size();i++){
        int diff=a[i]-minbuy;
        minbuy=min(minbuy,a[i]);
        profit=max(profit,diff);
    }
    return profit;
}
 
int main(){
    vector <int> a={2,1,5,2,6,7};
    int i=0;
    int minbuy=a[0];
    int profit=0;
    REbuyandSell(a,i,minbuy,profit);
    cout<<profit<<endl;
    cout<<buyandSell(a)<<endl;
    
 
 return 0;
}