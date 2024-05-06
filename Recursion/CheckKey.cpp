#include<iostream>
#include<string>
using namespace std;

bool CheckKey(string& a,int& n,int i,char& key){
    if(i>=n){
        return false;
    }
    if(a[i]==key){
        return true;
    }
    return CheckKey(a,n,i+1,key);

}
 
int main(){
    string a="Arpit";
    int n=a.size();
    int i=0;
    char key='k';
    cout<<CheckKey(a,n,i,key);

 
 
 
 
 
 return 0;
}