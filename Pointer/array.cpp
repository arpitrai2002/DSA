#include<iostream>
using namespace std;
 
int main(){
 int arr[10]={1,2,3,4};
 cout<<arr<<endl;
 cout<<&arr[0]<<endl;
 cout<<&arr<<endl;

 cout<<*arr+5<<endl;
 cout<<*(arr+3)<<endl;
 return 0;
}