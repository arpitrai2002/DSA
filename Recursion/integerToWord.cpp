#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

vector<pair<int,string>> mt={{1000000000,"Billion"},{1000000,"Million"},{1000,"Thousand"},
{100,"Hundred"},{90,"Ninty"},{80,"Eighty"},{70,"seventy"},{60,"sixty"},{50,"Fifty"},{40,"Forty"},{30,"Thirty"},{20,"Twenty"},
{19,"Nineteen"},{18,"Eighteen"},{17,"Seventeen"},{16,"Sixteen"},{15,"Fifteen"},{14,"Fourteen"},{13,"Thirteen"},{12,"Twelve"},{11,"Eleven"},
{10,"Ten"},{9,"Nine"},{8,"Eighty"},{7,"Seven"},{6,"Six"},{5,"Five"},{4,"Four"},{3,"Three"},{2,"Two"},{1,"One"}};
 
string intTwoWord(int n){
    if(n==0) return "Zero";

    for(auto at:mt){
        if(n>=at.first){
            string a="";
            if(n>=100){
                a=intTwoWord(n/at.first)+" ";
            }
            string b=at.second;
            string c="";
            if(n%at.first!=0){
                c=" " + intTwoWord(n%at.first);
            }
            return (a+b+c);
        }
    }
}



int main(){
    int n=1234567;
    string ans=intTwoWord(n);
    cout<<ans;
 
 
 
 return 0;
}