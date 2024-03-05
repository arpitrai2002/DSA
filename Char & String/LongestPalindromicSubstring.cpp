#include<iostream>
#include<string>
using namespace std;

bool isPalindrome(string a,int i,int j){
    while(i<j){
        if(a[i]!=a[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}

string longestPalindromicSubstring(string a){
    int len=a.size();
    string ans="";
    for(int i=0;i<len;i++){
        for(int j=i;j<len;j++){
            if(isPalindrome(a,i,j)){
                string t=a.substr(i,j-i+1);
                ans=t.size()>ans.size()?t:ans;
            }
        }
    }
    return ans;
}
 
int main(){
    string a="babab";
    cout<<longestPalindromicSubstring(a)<<endl;
 
 
 return 0;
}