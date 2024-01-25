#include<iostream>
#include<vector>
using namespace std;

vector<int> Element(vector<int> arr){
    int n=arr.size();
    int sn=n*(n+1)/2;
    int sn2=n*(n+1)*(2*n+1)/6;
    int s1=0,s2=0;

    for(int i=0;i<n;i++){
        s1+=arr[i];
        s2+=(arr[i]*arr[i]);
    }

    int x=s1-sn;
    int y=s2-sn2;
    y=y/x;
    int rep=(x+y)/2;
    int val=rep-x;

    return {rep,val};

}
 
int main(){
    vector<int> arr{2,1,1,5,3};
    vector<int> ans=Element(arr);
    cout<<ans[0]<<" "<<ans[1]<<endl; 
 return 0;
}