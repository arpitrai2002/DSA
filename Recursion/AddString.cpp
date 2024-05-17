#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void addS(string& num1,int p1,string& num2,int p2,int carry,string& ans){
    if(p1<0 && p2<0){
        if(carry!=0){
            ans.push_back(carry+'0');
        }
        return;
    }
    int n1=(p1>=0 ?num1[p1]:'0')-'0';
    int n2=(p2>=0 ?num2[p2]:'0')-'0';
    int sum=n1+n2+carry;
    int digit=sum%10;
    ans.push_back(digit+'0');
    carry=sum/10;

    addS(num1,p1-1,num2,p2-1,carry,ans);


}
 
int main(){
    string num1 ="786";
    string num2 ="69";
    string ans="";
    addS(num1,num1.size()-1,num2,num2.size()-1,0,ans);
    reverse(ans.begin(),ans.end());

    cout<<ans;
 
 
 
 return 0;
}