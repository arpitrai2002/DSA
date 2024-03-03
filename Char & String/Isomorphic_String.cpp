#include<iostream>
#include<string>
using namespace std;

bool isomorphic(string a,string b){
    int hash[256]={0};
    bool hashmaped[256]={0};

    for(int i=0;i<a.size();i++){
        if(hash[a[i]]==0 && hashmaped[b[i]]==0){
            hash[a[i]]=b[i];
            hashmaped[b[i]]=true;
        }
    }
    for(int i=0;i<a.size();i++){
        if(char(hash[a[i]])!=b[i]){
            return false;
        }
    }
    return true;
}
int main(){
    string a="add";
    string b="egg";
    cout<<isomorphic(a,b);
 
 return 0;
}