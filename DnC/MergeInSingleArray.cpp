#include<iostream>
#include<vector>
using namespace std;

void Merge(vector<int>& a){
    int i=0;
    int j=a.size()-1;
    int mid=(i+j)/2;
    int k=mid+1;

    vector<int> b;

    while(i<=mid && k<=j){
        if(a[i]<a[k]){
            b.push_back(a[i]);
            i++;
        }
        else{
            b.push_back(a[k]);
            k++;
        }
    }

    while(i<=mid){
        b.push_back(a[i]);
        i++;
    }

    while(k<=j){
        b.push_back(a[k]);
        k++;
    }

    a=b;
}
 
int main(){
    vector<int> a{1,3,5,2,4,6};
    Merge(a);
    for(auto mt:a){
        cout<<mt<<" ";
    } 
    return 0;
}