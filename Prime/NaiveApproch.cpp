#include<iostream>
using namespace std;

bool isPrime(int n){
    if(n<=1) return false;
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int Prime(int n){
    int c=0;
    for(int i=0;i<n;i++){
        if(isPrime(i)){
            c++;
        }
    }
    return c;
}
 
int main(){
    int n;
    cout<<"Enter Number"<<endl;
    cin>>n;

    cout<<"The Number of Prime in between 0 to "<<n<<Prime(n)<<endl;
 
 
 
 
 return 0;
}