#include<iostream>
#include<vector>
using namespace std;

int Merge(int a[],int low,int mid,int high){
    int i=low;
    int j=mid+1;
    int k=low;
    int b[100];
    while(i<=mid && j<=high){
        if(a[i]<a[j]){
            b[k]=a[i];
            i++;
            k++;
        }
        else{
            b[k]=a[j];
            j++;
            k++;
        }
    }

    while(i<=mid){
        b[k]=a[i];;
        i++;
        k++;
    }

    while(j<=high){
        b[k]=a[j];;
        j++;
        k++;
    }
    for(int q=0;q<=high;q++){
        a[q]=b[q];
    }
}

void MergeSort(int a[],int low,int high){
    int mid;
    if(low<high){
        mid=(low+high)/2;
        MergeSort(a,low,mid);
        MergeSort(a,mid+1,high);
        Merge(a,low,mid,high);
    }
}
 
int main(){
    int a[]={1,5,3,4,9,7,2};
    MergeSort(a,0,6);
    []
    for(auto mt:a){
        cout<<mt<<" ";
    }
    cout<<endl;
 
 return 0;
}