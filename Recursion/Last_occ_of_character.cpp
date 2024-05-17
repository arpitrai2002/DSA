#include<iostream>
#include<string>
using namespace std;

void lastoccLtR(string& a,char& x,int& n,int i,int & ans){
    if(i>=n){
        return;
    }
    if(a[i]==x){
        ans=i;
    }
    lastoccLtR(a,x,n,i+1,ans);

}
void lastoccRtL(string& a,char& x,int i,int & ans){
    if(i<0){
        return;
    }
    if(a[i]==x){
        ans=i;
        return;
    }
    lastoccRtL(a,x,i-1,ans);

}
int main(){
    string a="abcddedgd";
    char x='a';
    int n=a.size();
    int i=0;
    int ans=-1;
    int ans2=-1;
    lastoccLtR(a,x,n,i,ans);
    cout<<ans;
    lastoccRtL(a,x,n-1,ans2);
    cout<<ans2;
    

 
 
 
 
 
 return 0;
}