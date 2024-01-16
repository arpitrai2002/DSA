#include<iostream>
#include<vector>
#include<2dprint.h>
using namespace std;
 
int main(){
    vector<vector<int>> arr;
    for(int i=0;i<3;i++){
        vector<int> ans;
        for(int j=0;j<4;j++){
            cin>>ans[j];
        }
        arr.push_back(ans);
    }
 return 0;
}