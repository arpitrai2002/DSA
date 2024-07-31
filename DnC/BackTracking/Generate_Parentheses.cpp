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
        Generate_Parentheses(a,open-1,close,output);
        output.pop_back();
    }
}
int main(){
    int n;
    cin>>n;
    vector<string> a;
    Generate_Parentheses(a,n,n,"");
 
 return 0;
}