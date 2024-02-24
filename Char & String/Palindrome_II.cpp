#include<iostream>
#include<string>
using namespace std;

bool Palindrome(string a, int i,int j){
    while(i<j){
        if(a[i]!=a[j]){
            return false;
        }
        else{
            i++;
            j--;
        }
    }
    return true;
}
 
bool validPalindrome(string a){
    int i=0;
    int j=a.size()-1;
    while(i<j){
        if(a[i]==a[j]){
            i++;
            j--;
        }
        else{
            return (Palindrome(a,i+1,j) || Palindrome(a,i,j-1));
        }
    }
    return true;
}
int main(){
    string a="abca";
    cout<<validPalindrome(a);
 
 return 0;
}