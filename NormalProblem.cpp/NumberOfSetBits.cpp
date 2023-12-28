#include<iostream>
using namespace std;

int setBit(int n){
    int a=n;
    int count=0;
    while(a>0){
        if(a%2!=0){
            count++;
        }
        a=a/2;
    }
    return count;
}
 
int main(){
    int num;
    cout<<"Enter Number "<<endl;
    cin>>num;
    cout<<"Number of Set bit "<<setBit(num)<<endl;
 return 0;
}