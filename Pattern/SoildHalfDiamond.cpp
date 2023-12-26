#include<iostream>
using namespace std;

int main(){
    int rowcounter;
    cin>>rowcounter;
    
    for(int row=0;row<rowcounter;row++){
        for(int col=0;col<row+1;col++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int row=rowcounter;row>0;row--){
        for(int col=row-1;col>0;col--){
            cout<<"*";
        }
        cout<<endl;
    }
}