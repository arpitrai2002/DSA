#include<iostream>
using namespace std;

int main(){
    int rowcounter;
    cin>>rowcounter;
    int count=1;
    for(int row=0;row<rowcounter;row++){
        for(int col=0;col<row+1;col++){
            cout<<count++<<" ";
            if(col!=row){
                cout<<"* ";
            }
        }
        cout<<endl;
    }

    int start=count-rowcounter;
    for(int row=0;row<rowcounter;row++){
        int k=start;
        for(int col=0;col<=rowcounter-row-1;col++){
            cout<<k<<" ";
            k++;
            if(col!=rowcounter-row-1){
                cout<<"* ";
            }
        }
        cout<<endl;
        start=start-(rowcounter-row-1);

    }
}