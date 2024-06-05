#include<iostream>
using namespace std;

bool magicNumber(string& a,int ai,string& b,int bi){
    if(a.size()==ai && b.size()==bi){
        return true;
    }

    if(a.size()==ai && b.size()>bi){
        while(b.size()>bi){
            if(b[bi]!='*'){
                return false;
            }
            bi++;
        }
        return true;
    }
    if(a[ai]==b[bi] || '?'==b[bi]){
        return magicNumber(a,ai+1,b,bi+1);
    }

    if(b[bi]=='*'){
        bool caseA=magicNumber(a,ai+1,b,bi);
        bool caseB=magicNumber(a,ai,b,bi+1);

        return caseA || caseB;
    }
    return false;
}
 
int main(){
    string a="abcdef";
    string b="ab??ihef";
    int ai=0;
    int bi=0;
    cout<<magicNumber(a,ai,b,bi);

 
 
 return 0;
}