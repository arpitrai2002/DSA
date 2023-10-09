#include<iostream>
#include<vector>
using namespace std;
vector<int> spiralprint(vector<vector<int>> a){
    vector<int> arr;
    int row=a.size();
    int col=a[0].size();
    int total=row*col;

    int starting_row=0;
    int ending_col=col-1;
    int ending_row=row-1;
    int starting_col=0;
    int count=0;

    while(count<total){
        for(int i=starting_col;i<=ending_col && count<total;i++){
            arr.push_back(a[starting_row][i]);
            count++;
    }
        starting_row++;
        for(int i=starting_row;i<=ending_row && count<total;i++){
            arr.push_back(a[i][ending_col]);
            count++;
        }
        ending_col--;

        for(int i=ending_col;i>=starting_col && count<total;i--){
            arr.push_back(a[ending_row][i]);
            count++;
        }
        ending_row--;
        for(int i=ending_row;i>=starting_row && count<total;i--){
            arr.push_back(a[i][starting_col]);
            count++;
        }
        starting_col++;

    }
    return arr;

}

int main(){
    vector<vector<int>> arr{{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    vector<int> ans=spiralprint(arr);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;

}