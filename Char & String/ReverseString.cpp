#include<iostream>
#include<cstring>
using namespace std;

void Reversestr(char name[]){
    int i=0;
    int j=strlen(name)-1;
    while(i<j){
        swap(name[i],name[j]);
        i++;
        j--;
    }
}

int main(){
    char name[100];
    cout<<"Enter String ";
    cin>>name;

    cout<<name<<endl;
    Reversestr(name);
    cout<<name<<endl;
 
 
 return 0;
}