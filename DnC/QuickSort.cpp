#include<iostream>
using namespace std;

int Partition(int a[],int s,int e){
    //step 1 Find pivot
    int pivotIndex=s;
    int pivotElement=a[pivotIndex];
    // step 2 pivot right position
    int count=0;
    for(int i=s+1;i<=e;i++){
        if(a[i]<=pivotElement){
        count++;
        }
    }
    int rightPlace=s+count;
    swap(a[pivotIndex],a[rightPlace]);
    pivotIndex=rightPlace;

    //Step 3 Right and left
    int i=s;
    int j=e;

    while(i<pivotIndex && j>pivotIndex){
        while(a[i]<=pivotElement){
            i++;
        }
        while(a[j]>pivotElement){
            j--;
        }

        if(i<pivotIndex && j>pivotIndex){
            swap(a[i],a[j]);
        }
    }
    return pivotIndex;

}

void quicksort(int a[],int s,int e){
    if(s>=e){
        return;
    }
    int pIndex=Partition(a,s,e);
    quicksort(a,s,pIndex-1);
    quicksort(a,pIndex+1,e);
}

int main(){
    int a[]={8,6,7,28,34,2,7,3,6,78};
    int n=10;
    int s=0;
    int e=n-1;
    quicksort(a,s,e);

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
 
 
 
 return 0;
}