#include<iostream>
#include<string>
using namespace std;

void findstring(string& a,string& b){
    int f=a.find(b);
    if(f!=string::npos){
        string left=a.substr(0,f);
        string right=a.substr(f+b.size(),a.size());
        a=left+right;
        findstring(a,b);
    }
    else{
        return;
    }
}

string fs(string a,string b){
    int find=a.find(b);
    int len=b.length();
    while(find!=string::npos){
        a.erase(find,len);
        find=a.find(b);
    }
    return a;
}
 
int main(){
    string a="babcaabcbcdababcc";
    string part="abc";
    cout<<fs(a,part)<<endl;
    findstring(a,part);
    
    cout<<a;

 
 
 
 
 
 return 0;
}