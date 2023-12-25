#include<iostream>
using namespace std;

int main(){
    int rowcounter;
    cin>>rowcounter;

    for(int row=rowcounter;row>0;row--){
        for(int col=0;col<row;col++){
            if((row==1)||(row==rowcounter)){
                cout<<"*";
            }
            else{
                if((col==0)||(col==row-1)){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }

            }
        }
        cout<<endl;
    }
}