#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> MajorityElement(vector<int> arr){
    int n=arr.size();
    int count1=0,count2=0;
    int ele1,ele2;

    for(int i=0;i<n;i++){
        if(count1==0 && arr[i]!=ele2){
            count1=1;
            ele1=arr[i];
        }
        else if(count2==0 && arr[i]!=ele1){
            count2=1;
            ele2=arr[i];
        }

        else if(arr[i]==ele1) count1++;
        else if(arr[i]==ele2) count2++;

        else{
            count1--;
            count2--;
        }
    }
    count1=0;
    count2=0;
    for(int i=0;i<n;i++){
        if(arr[i]==ele1) count1++;
        if(arr[i]==ele2) count2++;
 }
    vector<int> ans;
    if(count1>(n/3)){
        ans.push_back(ele1);
    }
    if(count2>(n/3)){
        ans.push_back(ele2);
    }
    sort(ans.begin(),ans.end());
    return ans;

    }

 
 

 
int main(){
    vector<int> arr{6,6,4,4,6,4,4,6,4,2,4,2,4,6,6};
    vector<int> ans=MajorityElement(arr);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
 
 
 
 
 
 return 0;
}