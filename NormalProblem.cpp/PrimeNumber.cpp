#include<iostream>
using namespace std;

bool PrimeNumber(int a){
    if(a==1||a==0){
        return false;
    }
    for(int i=2;i<=a;i++){
        if(a%i==0){
            return false;
        }
    }
    return true;

}
 
int main(){
    int a;
    cin>>a;

    for(int i=0;i<=a;i++){
        if(PrimeNumber(i)){
            cout<<i<<" ";
        }
    }
    cout<<endl;

 
 
 
 
 return 0;
}