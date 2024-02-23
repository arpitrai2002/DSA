#include<iostream>
#include<string>
using namespace std;

string removeDuplicate(string a){
    string ans="";
    int i=0;
    int n=a.size();
    while(i<n){
        if((ans.length()>0) && ans[ans.size()-1]==a[i]){
            ans.pop_back();
        }
        else{
            ans.push_back(a[i]);
        }
        i++;
    }
    return ans;


}
 
int main(){
    string a="azxxzy";
    cout<<removeDuplicate(a);
 
 
 
 
 return 0;
}