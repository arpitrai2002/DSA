#include<iostream>
#include<vector>
#include<limits>
using namespace std;

void MinMax(vector<vector<int>> arr){
    int row=arr.size();
    int col=arr[0].size();
    int min=INT8_MAX;
    int max=INT8_MIN;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(max<arr[i][j]){
                max=arr[i][j];
            }
            if(min>arr[i][j]){
                min=arr[i][j];
            }
        }
    }
    cout<<"MIN "<<min<<endl;
    cout<<"MAX "<<max<<endl;
}
 
int main(){
    vector<vector<int>> arr{{10,2,3},{4,5,6},{8,7,3},{2,6,1}};
    MinMax(arr);
 
 
 
 
 return 0;
}