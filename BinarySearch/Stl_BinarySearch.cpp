#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 
int main(){
    vector<int> v{1,2,3,4,5,6,7,8,9,11};
    if(binary_search(v.begin(),v.end(),5)){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }
 
 return 0;
}