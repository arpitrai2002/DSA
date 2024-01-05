#include<iostream>
#include<vector>
using namespace std;
 
int main(){
    vector<int> a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    a.push_back(5);
    for(int i=0;i<a.size();i++){
        cout<<a[i];
    }
    cout<<endl;
    a.pop_back();
    cout<<a.size()<<endl;
    cout<<a.empty();

    vector<int> b(5,2);
    for(int i=0;i<b.size();i++){
        cout<<b[i];
    }

 return 0;
}