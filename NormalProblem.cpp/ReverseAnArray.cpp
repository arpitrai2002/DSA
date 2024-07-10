#include<iostream>
#include<vector>
using namespace std;

int reverseAnArray(vector<int> &a){
    int i=0;
    int j=a.size()-1;
    while(i<j){
        swap(a[i],a[j]);
        i++;
        j--;
    }
}
 
int main(){
    vector<int> a{1,2,3,4,5,6,7,8,9};
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    reverseAnArray(a);
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }

    
    cout<<endl;
 return 0;
}