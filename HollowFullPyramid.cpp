#include<iostream>
using namespace std;

int main(){
    int rowcounter;
    cin>>rowcounter;

    for(int row=rowcounter;row>0;row--){
        for(int colspace=row-1;colspace>0;colspace--){
            cout<<" ";
        }
        for(int col=0;col<=rowcounter-row;col++){
            if((row==1)||(row==rowcounter)){
                cout<<"* ";
            }
            else{
                if((col==0)||(col==rowcounter-row)){
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }
            }
        }
        cout<<endl;
    }
}