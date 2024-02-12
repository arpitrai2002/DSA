#include<iostream>
#include<cstring>
using namespace std;
 
int main(){
    char arr[100];
    cin.getline(arr,50);
    cout<<arr<<endl;

    int len=strlen(arr);
    for(int i=0;i<len;i++){
        if(arr[i]==' '){
            arr[i]='@';
        }
    }
    cout<<arr<<endl;
 
 
 
 return 0;
}