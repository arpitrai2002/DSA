#include<iostream>
#include<string>
#include<vector>
using namespace std;

string longestCommonPrefix(vector<string>& s){
    string ans;
    int j=0;
    while(true){
        char curr_char=0;
        for(auto str:s){
            if(j>=str.size()){
                curr_char=0;
                break;
            }
            if(curr_char==0){
                curr_char=str[j];
            }
            else if(curr_char!=str[j]){
                curr_char=0;
                break;
            }
        }
        if(curr_char==0){
            break;
        }
        ans.push_back(curr_char);
        j++;
    }
    return ans;
}
 
int main(){
    vector<string> a={"codeng", "codezen" ,"codengninja", "coder"};
    cout<<longestCommonPrefix(a);

 
 
 
 
 
 return 0;
}