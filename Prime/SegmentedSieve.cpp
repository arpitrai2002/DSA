#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

vector<bool> sieve(int n){
    vector<bool> prime(n+1,true);
    prime[0]=prime[1]=false;

    for(int i=2;i*i<=n;i++){
        int j=i*i;
        while(j<=n){
            prime[j]=false;
            j+=i;
        }
    }
    return prime;
}

vector<bool> SegmentedSieve(int L,int R){
    vector<bool> s=sieve(sqrt(R));
    vector<int> ss;
    for(int i=0;i<s.size();i++){
        if(s[i]){
        ss.push_back(i);
    }
    }
    vector<bool> prime(R-L+1,true);
    if(L==0 || L==1){
        prime[L]=false;
    }

    for(int i=0;i<ss.size();i++){
        int mul=(L/ss[i])*ss[i];
        if(mul<L){
            mul+=ss[i];
        }
        int j=max(mul,ss[i]*ss[i]);
        while(j<=R){
            prime[j-L]=false;
            j+=ss[i];
        }
    }
    return prime;


}
 
int main(){
    int L,R;
    cin>>L>>R;
    vector<bool> ans=SegmentedSieve(L,R);
    for(int i=0;i<ans.size();i++){
        if(ans[i]){
            cout<<i+L<<" ";
        }
    }
 
 
 
 
 return 0;
}