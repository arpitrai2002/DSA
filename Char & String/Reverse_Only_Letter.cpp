#include<iostream>
#include<string>
using namespace std;

string reverseOnlyLetter(string a){
    int i=0;
    int j=a.size()-1;

    while(i<j){
        if(isalpha(a[i])==isalpha(a[j])){
            swap(a[i],a[j]);
            i++;
            j--;
        }
        else if(!isalnum(a[i])){
            i++;
        }
        else{
            j--;
        }
    }
    return a;
}
 
int main(){
    string a="Test1ng-Leet=code-Q!";
    cout<<reverseOnlyLetter(a)<<endl;
 return 0;
}