#include<iostream>
using namespace std;

int main(){
    int rowcounter;
    cin>>rowcounter;
    for(int row=rowcounter;row>0;row--){
        for(int colspace=0;colspace<=rowcounter-row-1;colspace++){
            cout<<" ";
        }
        for(int col=0;col<row;col++){
            cout<<"* ";
        }
        cout<<endl;
    }
}