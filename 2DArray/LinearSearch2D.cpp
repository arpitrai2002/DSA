#include<iostream>
#include<vector>
using namespace std;
 
int main(){
    vector<vector<int>> arr{{1,2,3},{4,5,6},{7,8,9}};
    bool found=false;
    int value=10;
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[0].size();j++){
            if(arr[i][j]==value){
                found=true;
            }
        }
    }
    if(found){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }

 
 
 
 
 
 return 0;
}