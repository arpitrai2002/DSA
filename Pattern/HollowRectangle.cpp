#include<iostream>
using namespace std;

int main(){
    int row,col;
    cin>>row>>col;
    for(int i=0;i<row;i++){
        if((i==0)||(i==row-1)){
            for(int j=0;j<col;j++){
                cout<<"* ";
            }
            cout<<endl;
        }
        else{
            cout<<"* ";
            for(int j=0;j<col-2;j++){
                cout<<"  ";
            }
            cout<<"* ";
            cout<<endl;

        }
    }
}