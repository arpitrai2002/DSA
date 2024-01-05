#include<iostream>
#include<vector>
using namespace std;

int unique(vector<int> a){
    int ans=0;
    for(int i=0;i<a.size();i++){
        ans=ans^a[i];
    }
    return ans;
}
 
int main(){
    vector<int> a{1,2,1,3,4,2,3};
    cout<<unique(a);
 
 
 
 return 0;
}