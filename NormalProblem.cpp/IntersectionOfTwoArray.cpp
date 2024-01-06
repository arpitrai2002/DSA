#include<iostream>
#include<vector>
using namespace std;

vector<int> Intersection(vector<int> a,vector<int> b){
    int q=a.size();
    int w=b.size();
    vector<int> c;
    for(int i=0;i<q;i++){
        for(int j=0;j<w;j++){
            if(a[i]==b[j]){
                c.push_back(a[i]);
                b[j]=-1;
            }
        }
    }
    return c;
}

 
int main(){
    vector<int> a{1,2,3,4,5};
    vector<int> b{2,4,6,8,10};
    vector<int> c=Intersection(a,b);
    for(int i=0;i<c.size();i++){
        cout<<c[i]<<" ";
    }
    cout<<endl;

 return 0;
}