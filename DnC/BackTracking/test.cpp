#include<iostream>
#include<vector>
#include<string>
using namespace std;

void Permutation(vector<string> &b,int index,string s1){
        if(index>=s1.size()){
            b.push_back(s1);
        }

        for(int i=index;i<s1.size();i++){
            swap(s1[i],s1[index]);
            Permutation(b,index+1,s1);
            swap(s1[i],s1[index]);
        }
    }

bool Check(string i,string& s2){
        if(s2.find(i)!= string::npos){
            return true;
        }
        return false;
    }

bool checkInclusion(string s1, string s2) {
        string a="";
        vector<string> b;
        Permutation(b,0,s1);
        for(auto i:b){
            if(Check(i,s2)){
                return true;
            }
        }
        return false;
}
int main(){
    cout<<(checkInclusion("ab","eidboaoo"));
 
 
 
 return 0;
}