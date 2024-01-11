#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void sort01(vector<int> &a){
    int i=0;
    int j=a.size()-1;
    while(i<j){
        if(a[i]==1 && a[j]==0){
            swap(a[i],a[j]);
            i++;
            j--;
        }
        else if(a[i]==0){
            i++;
        }
        else{
            j--;
        }
    }
}

void printarray(vector<int> a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> a{1,0,1,0,1,0,0,1,0,1};
    printarray(a);
    sort01(a);
    printarray(a);
 return 0;
}