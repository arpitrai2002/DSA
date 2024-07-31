#include<iostream>
#include<vector>
using namespace std;

// void merge(vector<int>& arr,int s,int mid,int e){
//     vector<int> temp;
//     int i=s;
//     int j=mid+1;
//     while(i<=mid && j<=e){
//         if(arr[i]<arr[j]){
//             temp.push_back(arr[i++]);
//         }
//         else{
//             temp.push_back(arr[j++]);
//         }
//     }

//     while(i<=mid){
//         temp.push_back(arr[i++]);
//     }
//     while(j<=e){
//          temp.push_back(arr[j++]);
//     }

//     for(int a=s;a<=e;a++){
//         arr[a]=temp[a-s];
//     }
// }

void inPlaceMerge(vector<int>& arr,int s,int mid,int e){
    int total_len=e-s+1;
    int gap=total_len%2+total_len/2;
    while(gap>0){
        int i=s,j=s+gap;
        while(j<=e){
            if(arr[i]>arr[j]){
            swap(arr[i],arr[j]);
            }
            ++i,++j;
        }
    gap=gap<=1?0:(gap%2)+(gap/2);
    }
}

void mergeSort(vector<int>& arr,int s,int e){
    if(s>=e) return;
    int mid=(s+e)/2;
    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);
    inPlaceMerge(arr,s,mid,e);
}
 
int main(){

    vector<int> arr{5,3,9,4,7,6,2,85,1,14,36,1};
    int s=0;
    int e=arr.size()-1;
    mergeSort(arr,s,e);

    for(auto i:arr){
        cout<<i<<" ";
    }
    cout<<endl;
 return 0;
}