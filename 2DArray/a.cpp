#include<iostream>
#include<vector>
using namespace std;
 
vector<int> SpriralPrint(vector<vector<int>> arr){
    int row=arr.size();
    int col=arr[0].size();
    int total=row*col;

    int row_start=0;
    int col_start=0;
    int row_end=row-1;
    int col_end=col-1;

    int count=0;
    vector<int> ans;
    while(count<total){
        for(int i=col_start;i<=col_end && count<total;i++){
            ans.push_back(arr[row_start][i]);
            count++;
        }
        row_start++;
        for(int i=row_start;i<=row_end && count<total;i++){
            ans.push_back(arr[i][col_end]);
            count++;
        }
        col_end--;

        for(int i=col_end;i>=col_start && count<total;i--){
            ans.push_back(arr[row_end][i]);
            count++;
        }
        row_end--;

        for(int i=row_end;i>=row_start && count<total;i--){
            ans.push_back(arr[i][col_start]);
            count++;
        }
        col_start++;
    }
    return ans;

}
int main(){
    vector<vector<int>> ans{{1,2,3},{4,5,6},{7,8,9}};
    vector<int> arr=SpriralPrint(ans);
    for(int i=0;i<ans.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
 
 
 
 
 return 0;
}