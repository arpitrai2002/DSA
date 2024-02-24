#include<iostream>
#include<string>
using namespace std;

int subcount(string a,int i,int j){
    int count=0;
    while(i>=0 && j<a.size() && a[i]==a[j]){
        i--;
        j++;
        count++;
    }
    return count;
}

int countSubstring(string a){
    int count=0;
    for(int i=0;i<a.size();i++){
        int oddAns=subcount(a,i,i);
        count+=oddAns;

        int evenAns=subcount(a,i,i+1);
        count+=evenAns;
    }
    return count;
}
int main(){
    string a="aaa";
    cout<<countSubstring(a);
 
 
 
 return 0;
}