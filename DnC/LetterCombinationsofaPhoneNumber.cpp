#include<iostream>
#include<vector>
#include<string>
using namespace std;

void Combine(vector<string>& m,string digits,string output,vector<string>& ans,int index){
    if(index>=(digits.size())){
        ans.push_back(output);
        return;
    }

    int digit=digits[index]-'0';
    string val=m[digit];

    for(int j=0;j<val.size();j++){
        char v=val[j];
        output.push_back(v); 
        Combine(m,digits,output,ans,index+1);
        output.pop_back();
    }
}
 
int main(){
    vector<string> m(10);
    m[2]="abc";
    m[3]="def";
    m[4]="ghi";
    m[5]="jkl";
    m[6]="mno";
    m[7]="pqrs";
    m[8]="tuv";
    m[9]="wxyz";
    
    string digits;
    cin>>digits;

    string output="";
    vector<string> ans;

    if(digits==""){
        cout<<"";
    }
    else{
        Combine(m,digits,output,ans,0);
        for(auto i:ans){
            cout<<i<<" ";
        }
    }
    cout<<endl;



 
 return 0;
}