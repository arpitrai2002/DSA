#include<iostream>
#include<vector>
using namespace std;

void Twosum(vector<int> a,int sum){
    for(int i=0;i<a.size();i++){
        for(int j=i+1;j<a.size();j++){
            if(a[i]+a[j]==sum){
                cout<<a[i]<<","<<a[j]<<endl;
            }
        }
    }


}
int main(){
    vector<int> a{5,4,2,8,3,4,5,7,1,6};
    int sum=9;
    Twosum(a,sum);
 return 0;
}