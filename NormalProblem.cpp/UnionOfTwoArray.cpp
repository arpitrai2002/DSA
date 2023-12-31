#include<iostream>
#include<vector>
using namespace std;

vector<int> unionarray(vector<int> a,vector<int> b){
    int i=0,j=0;
    vector<int> ans;
    while(i<a.size() && j<b.size()){
        if(a[i]<b[j]){
            ans.push_back(a[i]);
            i++;
        }
        else{
            ans.push_back(b[j]);
            j++;
        }
    }
    while(i<a.size()){
        ans.push_back(a[i]);
        i++;
    }

    while(j<b.size()){
        ans.push_back(b[j]);
        j++;
    }

    return ans;

}
 
int main(){
    vector<int> a{1,3,5,7,9};
    vector<int> b{2,4,6,8,10,12};
    vector<int> c=unionarray(a,b);
    for(int i=0;i<c.size();i++){
        cout<<c[i]<<" ";
    }
    cout<<endl;

 return 0;
}