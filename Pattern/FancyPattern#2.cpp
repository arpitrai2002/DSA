#include<iostream>
using namespace std;

int main(){
    int rowcounter;
    cin>>rowcounter;

    for(int row=0;row<rowcounter;row++){
        for(int colstar=0;colstar<rowcounter+3-row;colstar++){
            cout<<"*";
        }
        for(int col=1;col<=row+1;col++){
            if(col==row+1){
                cout<<col;
            }
            else{
                cout<<col<<"*";
            }
        }
        for(int colstar=0;colstar<rowcounter+3-row;colstar++){
            cout<<"*";
        }
        cout<<endl;
    }
}