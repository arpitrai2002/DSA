#include<iostream>
#include<vector>
using namespace std;

void Merge(vector<int>& a,vector<int>& b,vector<int>& c){
    int ai=0;
    int bi=0;
    int aj=a.size()-1;
    int bj=b.size()-1;

    while(ai<=aj && bi<=bj){
        if(a[ai]<=b[bi]){
            c.push_back(a[ai]);
            ai++;
        }
        else{
            c.push_back(b[bi]);
            bi++;
        }
    }

    while(ai<=aj){
        c.push_back(a[ai]);
        ai++;
    }

     while(bi<=bj){
        c.push_back(b[bi]);
        bi++;
    } 

}
 
int main(){
    vector<int> a={2,4,6,8};
    vector<int> b={1,3,5,7,9};
    vector<int> c;
    Merge(a,b,c);
    for(int i=0;i<c.size();i++){
        cout<<c[i]<<" ";
    }

 return 0;
}