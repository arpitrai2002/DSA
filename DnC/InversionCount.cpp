#include<iostream>
#include<vector>
using namespace std;

int Merge(vector<int>& a,int low,int mid,int high){
    
}

void MergeSort(vector<int> a,int low,int high){
    int mid;
    while(low<high){
        mid=(low+high)/2;
        MergeSort(a,low,mid);
        MergeSort(a,mid+1,low);
        Merge(a,low,mid,high);
    }
}
 
int main(){
 
 
 
 
 
 return 0;
}