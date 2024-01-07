#include<iostream>
#include<vector>
using namespace std;

void ThreeSum(vector<int> a,int sum){
    for(int i=0;i<a.size()-2;i++){
        for(int j=i+1;j<a.size()-1;j++){
            for(int k=j+1;k<a.size();k++){
                if(a[i]+a[j]+a[k]==sum){
                cout<<a[i]<<","<<a[j]<<","<<a[k]<<endl;
                }
            }
        }
    }
}
 
int main(){
    vector<int> a{1,5,3,4,7,2,6,9,8};
    int sum=14;
    ThreeSum(a,sum);
 
 
 
 
 return 0;
}