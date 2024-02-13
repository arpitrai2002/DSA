#include<iostream>
#include<cstring>
using namespace std;

void upper(char arr[]){
    for(int i=0;i<strlen(arr);i++){
        arr[i]=arr[i]-'a'+'A';
    }
}
 
int main(){
    char arr[100];
    cin>>arr;

    upper(arr);
    cout<<arr;
 
 
 
 
 
 return 0;
}