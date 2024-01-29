#include<iostream>
#include<unordered_map>
#include<vector>
#include<algorithm>
using namespace std;

int firstRepeatingElement(vector<int> arr){
    unordered_map<int,int> ans;
    int n=arr.size();

    for(int i=0;i<n;i++){
        ans[arr[i]]++;
    }

    for(int i=0;i<n;i++){
        if(ans[arr[i]]>1){
            return i+1;
        }
    }
    return -1;
}
 
int main(){
    vector<int> arr{1,7,2,5,3,5};
    cout<<firstRepeatingElement(arr)<<endl;
 
 
 
 
 return 0;
}