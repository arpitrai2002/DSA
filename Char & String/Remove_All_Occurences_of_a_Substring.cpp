#include<iostream>
#include<string>
using namespace std;

string removeOccurences(string a,string b){
    int len=b.size();
    int f=a.find(b);
    while(f!=string::npos){
       a.erase(f,len);
       f=a.find(b);
    }
    return a;

}

int main(){
    string a="axxxxyyyyb";
    string b="xy";
    cout<<removeOccurences(a,b)<<endl;
 
 
 return 0;
}