#include<iostream>
using namespace std;

int main(){
    int rowcounter;
    cin>>rowcounter;

    for(int row=1;row<=rowcounter;row++){
        for(int col=1;col<=row;col++){
        cout<<col<<" ";
    }
    for(int col=row-1;col>0;col--){
        cout<<col<<" ";
    }
    cout<<endl;
}
}