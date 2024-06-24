#include<iostream>
#include<vector>
using namespace std;

int Merge(vector<int>& a,int low,int mid,int high){
    int i=low;
    int j=mid+1;

    vector<int> b;
    int count=0;
    while(i<=mid && j<=high){
        if(a[i]<=a[j]){
            b.push_back(a[i]);
            i++;
        }
        else{
            count+=mid-i+1;
            b.push_back(a[j]);
            j++;
        }
    }

    while(i<=mid){
        b.push_back(a[i]);
        i++;
    }

    while(j<=high){
        b.push_back(a[j]);
        j++;
    }

    for(int p=low;p<=high;p++){
        a[p]=b[p-low];
    }
    return count;
}

int MergeSort(vector<int>& a,int low,int high){
    int count=0;
    if(low>=high) return count;
    int mid=(low+high)/2;
    count+=MergeSort(a,low,mid);
    count+=MergeSort(a,mid+1,high);
    count+=Merge(a,low,mid,high);
    return count;
}
 
int main(){
    vector<int> a{3,2,1};
    cout<<MergeSort(a,0,2); 
 
 
 
 return 0;
}