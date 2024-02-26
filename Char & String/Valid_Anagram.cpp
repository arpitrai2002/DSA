#include<iostream>
#include<vector>
using namespace std;

bool Anagram(string s,string q){
    int arr[256]={0};
    for(int i=0;i<s.size();i++){
        arr[s[i]]++;
    }
    for(int i=0;i<q.size();i++){
        arr[q[i]]--;
    }
    for(int i=0;i<256;i++){
        if(arr[i]!=0){
            return false;
        }
    }
    return true;

}
 
int main(){
    string a="anagram";
    string b="nagaram";
    if(Anagram(a,b)){
        cout<<"Valid Anagram"<<endl;
    }
    else{
        cout<<"Not Anagram"<<endl;
    }
 
 
 
 return 0;
}