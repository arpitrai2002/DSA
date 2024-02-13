#include<iostream>
#include<cstring>
using namespace std;

void Upperarr(char arr[]){
    for(int i=0;i<strlen(arr);i++){
        if((arr[i]>=65 && arr[i]<=97)){
            continue;
        }
        arr[i]=arr[i]-'a'+'A';
    }
}
 
int main(){
    char arr[100];
    cin.getline(arr,50);
    Upperarr(arr);
    cout<<arr; 
 
 
 return 0;
}