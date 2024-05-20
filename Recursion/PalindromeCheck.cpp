#include<iostream>
#include<string>
using namespace std;

bool checkpalindrome(string& a,int i,int j){
    if(i>=j){
        return true;
    }
    if(a[i]!=a[j]){
        return false;
    }
    return checkpalindrome(a,i+1,j-1);
}

 
int main(){
    string a="babbab";
    int i=0;
    int j=a.size()-1;
    cout<<checkpalindrome(a,i,j);
 
 
 
 
 
 return 0;
}