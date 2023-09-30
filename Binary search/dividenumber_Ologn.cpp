#include<iostream>
using namespace std;

int divt(int divident,int divisor){
    int i=0;
    int j=divident;
    int mid=(i+j)/2;
    int ans=0;
    while(i<=j){
        if(divisor*mid==divident){
            return mid;
        }
        else if(divisor*mid>divident){
            j=mid-1;
        }
        else{
            i=mid+1;
            ans=mid;
        }
        // ans=mid;
        mid=(i+j)/2;
    }
    return ans;
}



int main(){
    int divident=20;
    int divisor=7;
    int ans=divt(divident,divisor);
    cout<<ans;

}