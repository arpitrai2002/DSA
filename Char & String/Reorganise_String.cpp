#include<iostream>
#include<string>
using namespace std;

string Reoganise(string a){
    int hash[26]={0};
    for(int i=0;i<a.size();i++){
        hash[a[i]-'a']++;
    }

    int max_freq=INT8_MIN;
    char max_char;
    for(int i=0;i<26;i++){
        if(hash[i]>max_freq){
            max_freq=hash[i];
            max_char=i+'a';
        }
    }

    int index=0;
    while(max_freq>0 && index<a.size()){
        a[index]=max_char;
        index+=2;
        max_freq--;
    }

    if(max_freq!=0){
        return "";
    }
    hash[max_char-'a']=0;
    for(int i=0;i<26;i++){
        while(hash[i]>0){
            index=index>=a.size()?1:index;
            a[index]=i+'a';
            index+=2;
            hash[i]--;
        }
    }
    return a;
}
 
int main(){
    string a="baabb";
    cout<<Reoganise(a)<<endl;
 return 0;
}