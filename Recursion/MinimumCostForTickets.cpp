#include<iostream>
#include<vector>
using namespace std;

int minCost(vector<int>& days,vector<int>& costs,int i){
    if(i>=days.size()){
        return 0;
    }

    int cost1=costs[0]+minCost(days,costs,i+1);

    int passValid=days[i]+7-1;
    int j=i;
    while(j<days.size() && days[j]<=passValid){
        j++;
    }
    int cost7=costs[1]+minCost(days,costs,j);

    passValid=days[i]+7-1;
    j=i;
    while(j<days.size() && days[j]<=passValid){
        j++;
    }
    int cost30=costs[2]+minCost(days,costs,j);

    return min(cost1,min(cost7,cost30));
}

int main(){
    vector<int> days={1,4,6,7,8,20};
    vector<int> costs={2,7,15};
    cout<<minCost(days,costs,0);

 return 0;
}