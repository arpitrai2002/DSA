#include<iostream>
#include<cstring>
using namespace std;

bool isPalindrome(char arr[]){
    int i=0;
    int j=strlen(arr)-1;
    if(arr[i]!=arr[j]){
        return false;
    }
    i++;
    j--;
    return true;
}
 
int main(){
    char arr[100];
    cin>>arr;

    if(isPalindrome){
    cout<<"Is palindrome YES"<<endl;
    }

    else{
    cout<<"Is palindrome NO"<<endl;
    }
 
 
 
 
 
 return 0;
}