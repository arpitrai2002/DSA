#include<iostream>
#include<string>
using namespace std;

bool isVowel(char a){
    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'){
        return true;
    }
}
 
string reverseVowel(string a){
    int i=0;
    int j=a.size()-1;
    while(i<j){
        if(isVowel(a[i])==isVowel(a[j])){
            swap(a[i],a[j]);
            i++;
            j--;
        }
        else if(!isVowel(a[i])){
            i++;
        }
        else{
            j--;
        }
    }
    return a;
}
int main(){
    string a="hello";
    cout<<reverseVowel(a)<<endl;

 return 0;
}