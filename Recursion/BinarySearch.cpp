#include<iostream>
#include<vector>
using namespace std;

int BinarySearch(vector<int>& a,int l,int h,int key){
    if(l>h){
        return -1;
    }
    int mid=(l+h)/2;
    if(a[mid]==key){
        return mid;
    }
    if(a[mid]>key){
        h=mid-1;
    }
    else{
        l=mid+1;
    }
    return BinarySearch(a,l,h,key);
}
int main(){
    vector<int> a{10,20,33,40,50,60,75};
    int h=a.size()-1;
    int l=0;
    int key=40;
    cout<<"Found At: "<<BinarySearch(a,l,h,key);

 
 
 
 
 return 0;
}