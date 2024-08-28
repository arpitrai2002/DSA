#include<iostream>
#include<vector>
#include<string>
using namespace std;

void Generate_Parentheses(vector<string> &a,int open,int close,string output){
    if(open==0 && close==0){
        a.push_back(output);
        return;
    }

    if(open>0){
        output.push_back('(');
        Generate_Parentheses(a,open-1,close,output);
        output.pop_back();
    }

    if(close>open){
        output.push_back(')');
        Generate_Parentheses(a,open,close-1,output);
        output.pop_back();
    }
}
int main(){
    int n=3;
    vector<string> a;
    Generate_Parentheses(a,n,n,"");
    for(auto i:a){
        cout<<i<<" ";
    }
    cout<<endl;
 
 return 0;
}