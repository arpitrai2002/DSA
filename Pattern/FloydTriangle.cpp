#include<iostream>
using namespace std;

int main(){
    int rowcounter;
    cin>>rowcounter;
    int count=1;
    for(int row=0;row<rowcounter;row++){
        for(int col=0;col<=row;col++){
            cout<<count++<<" ";
        }
        cout<<endl;
    }
}