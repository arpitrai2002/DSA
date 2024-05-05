#include<iostream>
using namespace std;

void Count(int n){
    if(n==0){
        return;
    }
    // cout<<n<<" ";
    Count(n-1);
    cout<<n<<" ";

}
 
int main(){
    int n=6;
    Count(n);
 
 
 
 
 return 0;
}