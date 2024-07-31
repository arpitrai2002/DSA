#include<iostream>
#include<vector>
using namespace std;

void QuickSort(vector<int> &arr,int start,int end){
    if(start>=end) return;
    int i=start-1;
    int j=start;
    int pivot=end;
    while(j<=pivot){
        if(arr[j]<arr[pivot]){
            i++;
            swap(arr[i],arr[j]);
        }
        j++;
    }
    i++;
    swap(arr[i],arr[pivot]);
    QuickSort(arr,start,i-1);
    QuickSort(arr,i+1,end);
}
 
int main(){
    vector<int> arr{8,3,4,32,7,1,2,78,36,12,47,12,35,1};
    QuickSort(arr,0,arr.size());
    for(auto i:arr){
        cout<<i<<" ";
    }
    cout<<endl;
 
 return 0;
}