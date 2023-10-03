#include<iostream>
#include<vector>
using namespace std;

int MissingElement(vector<int> a){
    int l=0;
    int h=a.size()-1;
    while(l<=h){
        int mid=(l+h)/2;
        if(a[mid]!=mid+1 && a[mid-1]==mid){
            return mid+1;
        }
        else if(a[mid]==mid+1){
            l=mid+1;
        }
        else{
            h=mid;
        }

    }
}


int main(){
    vector<int> a{1,2,3,4,5,6,7,8,10};
    cout<<MissingElement(a)<<endl;
}