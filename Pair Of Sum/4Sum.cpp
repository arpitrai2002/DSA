#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void FourSum(vector<int> a,int target){
    int size=a.size();
    sort(a.begin(),a.end());
    for(int i=0;i<size-3;i++){
        for(int j=i+1;j<size-2;j++){
            for(int k=j+1;k<size-1;k++){
                for(int l=k+1;l<size;l++){
                    if(a[i]+a[j]+a[k]+a[l]==target){
                        cout<<a[i]<<","<<a[j]<<","<<a[k]<<","<<a[l]<<endl;
                    }
                }
            }
        }
    }
}
 
int main(){
    vector<int> a{1,5,4,3,8,2,8,6,4,6,7,3,1,6,7,2,4,3};
    int target=16;
    FourSum(a,target);
 
 
 
 
 return 0;
}