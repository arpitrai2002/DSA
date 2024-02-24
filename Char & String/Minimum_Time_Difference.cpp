#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int findMinDifference(vector<string>& a){
    vector<int> minu;
    int len=a.size();
    for(int i=0;i<len;i++){
        int hours=stoi(a[i].substr(0,2));
        int mi=stoi(a[i].substr(3,2));
        int minutes=hours*60+mi;
        minu.push_back(minutes);
    }
    sort(minu.begin(),minu.end());

    int diff=INT16_MAX;
    for(int i=0;i<len-1;i++){
        int d=minu[i+1]-minu[i];
        diff=min(diff,d);
    }
    int b=minu[0]+1440-minu[len-1];
    diff=min(b,diff);
    return diff;
}
 
int main(){
    vector<string> a={"10:00","23:59","00:00"};
    cout<<findMinDifference(a);
 
 return 0;
}