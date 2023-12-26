#include<iostream>
using namespace std;
 
int main(){
    int rowcounter;
    cin>>rowcounter;

    for(int row=0;row<rowcounter;row++){
        for(int col=0;col<=row;col++){
            cout<<"*";
        }
        for(int colspace=rowcounter-row-1;colspace>0;colspace--){
            cout<<" ";
        }
        for(int colspace=rowcounter-row-1;colspace>0;colspace--){
            cout<<" ";
        }
        for(int col=0;col<=row;col++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int row=rowcounter;row>0;row--){
        for(int col=0;col<row;col++){
            cout<<"*";
        }
        for(int colspace=rowcounter-row-1;colspace>=0;colspace--){
            cout<<" ";
        }
        for(int colspace=rowcounter-row-1;colspace>=0;colspace--){
            cout<<" ";
        }
        for(int col=0;col<row;col++){
            cout<<"*";
        }
        cout<<endl;
    
    }

 
   return 0;
}