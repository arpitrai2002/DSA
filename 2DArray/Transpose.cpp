#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> trpanspose(vector<vector<int>>& arr){
    int row=arr.size();
    int col=arr[0].size();
    // vector<vector<int>> ans(col,vector<int>(row,0));
    vector<vector<int>> ans;
    for(int i=0;i<col;i++){
        vector<int> temp;
        for(int j=0;j<row;j++){
            // ans[i][j]==arr[j][i];
            temp.push_back(arr[j][i]);
        }
        ans.push_back(temp);
    }
    return ans;
}

void arrayprint(vector<vector<int>> arr){
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
 
int main(){
    vector<vector<int>> arr{{1,2,3},{4,5,6},{7,8,9}};
    arrayprint(arr);
    vector<vector<int>> ans=trpanspose(arr);
    arrayprint(ans);

 
 
 
 
 return 0;
}