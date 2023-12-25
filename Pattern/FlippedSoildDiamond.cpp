#include<iostream>
using namespace std;

int main(){
    int rowcounter;
    cin>>rowcounter;

    for(int row=0;row<rowcounter;row++){
        for(int col=0;col<rowcounter-row;col++){
            cout<<"*";
        }
        for(int colspace=0;colspace<2*row;colspace++){
            cout<<" ";
        }
        for(int col=0;col<rowcounter-row;col++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int row=rowcounter;row>0;row--){
        for(int col=0;col<=rowcounter-row;col++){
            cout<<"*";
        }
        for(int colspace=0;colspace<2*(row-1);colspace++){
            cout<<" ";
        }
        for(int col=0;col<=rowcounter-row;col++){
            cout<<"*";
        }
        cout<<endl;
    }
}