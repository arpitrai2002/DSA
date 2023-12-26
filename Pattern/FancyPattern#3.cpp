#include<iostream>
using namespace std;

int main(){
    int rowcounter;
    cin>>rowcounter;
    cout<<"*"<<endl;
    for(int row=1;row<=rowcounter;row++){
        cout<<"*";
        for(int col=1;col<row+1;col++){
            cout<<col;
        }
        for(int col=row-1;col>0;col--){
            cout<<col;
        }
        cout<<"*"<<endl;
    }
    for(int row=rowcounter-1;row>0;row--){
        cout<<"*";
        for(int col=1;col<row+1;col++){
            cout<<col;
        }
        for(int col=row-1;col>0;col--){
            cout<<col;
        }
        cout<<"*"<<endl;
    }
    cout<<"*"<<endl;
}