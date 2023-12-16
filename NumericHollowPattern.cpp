#include<iostream>
using namespace std;

int main(){
    int rowcounter;
    cin>>rowcounter;

    for(int row=1;row<=rowcounter;row++){
        for(int col=1;col<row+1;col++){
            if((row==1)||(row==rowcounter)){
                cout<<col<<" ";
            }
            else{
                if((col==1)||(col==row)){
                    cout<<col<<" ";
                }
                else{
                    cout<<"  ";
                }
            }
        }
        cout<<endl;
    }
}