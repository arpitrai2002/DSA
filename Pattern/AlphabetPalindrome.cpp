#include<iostream>
using namespace std;

int main(){
    int rowcounter;
    cin>>rowcounter;
    for(int row=0;row<rowcounter;row++){
        for(int col=0;col<=row;col++){
            char a='A'+col;
            cout<<a;
        }
        for(int col=row;col>=1;col--){
            char a='A'+col-1;
            cout<<a;
        }
        cout<<endl;
    }
}