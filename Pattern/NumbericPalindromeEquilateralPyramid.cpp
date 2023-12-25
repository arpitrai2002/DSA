#include<iostream>
using namespace std;

int main(){
    int rowcounter;
    cin>>rowcounter;
    for(int row=1;row<=rowcounter;row++){
        for(int colspace=rowcounter-row;colspace>0;colspace--){
            cout<<" ";
        }
        for(int col=1;col<=row;col++){
            cout<<col;
        }
        for(int col=1;col<row;col++){
            cout<<col;
        }
        cout<<endl;
    }
}