#include<iostream>
using namespace std;


int main(){
    int rowcounter;
    cin>>rowcounter;
    for(int row=0;row<rowcounter;row++){
        for(int colspace=0;colspace<rowcounter-row-1;colspace++){
            cout<<"  ";
        }
        for(int col=0;col<row+1;col++){
            if((col==0)||(col==row)){
                cout<<" *  ";
            }
            else{
                cout<<"    ";
            }
        }
        cout<<endl;
    }
    for(int row=rowcounter-1;row>=0;row--){
        for(int colspace=0;colspace<rowcounter-row-1;colspace++){
            cout<<"  ";
        }
        for(int col=0;col<row+1;col++){
            if((col==0)||(col==row)){
                cout<<" *  ";
            }
            else{
                cout<<"    ";
            }
        }
        cout<<endl;
    }
}