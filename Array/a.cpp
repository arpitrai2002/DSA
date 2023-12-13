#include<iostream>
#include<vector>
using namespace std;

vector<int> comelement(vector<int> a,vector<int> b,vector<int> c){
    int i=0,j=0,k=0;
    vector<int> arr;
    while(i<a.size() && j<b.size() && k<c.size()){
        if(a[i]==b[j] && b[j]==c[k]){
            arr.push_back(a[i]);
            i++;
            j++;
            k++;
        }
        else if(a[i]<b[j]){
            i++;
        }
        else if(b[j]<c[k]){
            j++;
        }
        else{
            k++;
        }
        return arr;
    }

}

int main(){
    vector<int> a{10,23,25,35,45,50,56};
    vector<int>  b{1,20,25,26,28,45,60};
    vector<int>  c{5,13,25,29,35,45,50};

    vector<int> arr=comelement(a,b,c);
    for(int i=0;i<arr.size();i++){
        cout<<a[i]<<" ";
    }


}