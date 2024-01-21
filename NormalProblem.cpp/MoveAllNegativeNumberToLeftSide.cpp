#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void move(vector<int>& arr){
    int low=0;
    int high=arr.size()-1;
    while(low<=high){
        if(arr[low]>0 && arr[high]<0){
            swap(arr[low],arr[high]);
            low++;
            high--;
        }
        else if(arr[low]<0){
            low++;
        }
        else{
            high--;
        }
    }
}
void arrprint(vector<int> arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
 
int main(){
    vector<int> arr{5,6,-4,-2,4,6};
    arrprint(arr);
    move(arr);
    arrprint(arr);

 
 
 
 
 return 0;
}