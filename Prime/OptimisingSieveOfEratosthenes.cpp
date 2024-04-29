#include<iostream>
#include<vector>
using namespace std;

vector<bool> OptimiseSieve(int n){
    if(n<1) return {0};
    vector<bool> sieve(n,true);
    sieve[0]=sieve[1]=false;
    for(int i=2;i*i<=n;i++){ //Optimisization 2
        if(sieve[i]){
            int j=i*i; //Optimisization 1
            while(j<=n){
                sieve[j]=false;
                j+=i;
            }
        }
    }
    return sieve;

}
 
int main(){
    vector<bool> prime=OptimiseSieve(100);
    for(int i=0;i<100;i++){
        if(prime[i]){
        cout<<i<<" ";
    }
    }
    cout<<endl;
 
 
 return 0;
}