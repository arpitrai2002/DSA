#include<iostream>
#include<vector>
using namespace std;

int SoE(int n){
    if(n==0) return 0;
    vector<bool> arr(n,true);
    arr[0]=arr[1]=false;
    int c=0;
    for(int i=2;i<=n;i++){
        if(arr[i]){
            c++;
            int j=i*2;
            while(j<n){
                arr[j]=false;
                j+=i;
            }
        }
    }
    return c;
    
}

int main(){
    int n;
    cin>>n;
    cout<<SoE(n)<<endl;
 
 
 
 
 
 return 0;
}