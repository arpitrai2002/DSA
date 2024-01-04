#include<iostream>
#include<vector>
using namespace std;

void extremePoint(vector<int> a){
    int s=a.size();
    int i=0;
    int j=s-1;
    while(i<j){
        cout<<a[i]<<" ";
        cout<<a[j]<<" ";
        i++;
        j--;
    }

} 
int main(){
    vector<int> a{1,2,3,4,5,6,7,8,9};
    extremePoint(a);

 
 
 return 0;
}