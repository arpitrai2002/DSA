#include<iostream>
#include<vector>
using namespace std;
bool binary2D(vector<vector<int>> arr,int target){
    int row=arr.size();
    int column=arr[0].size();
    int i=0;
    int j=row*column-1;
    int mid=(i+j)/2;
    while(i<=j){
        int r=mid/column;
        int c=mid%column;
        if(arr[r][c]==target){
            return 1;
        }
        else if(arr[r][c]>target){
            j=mid-1;
        }
        else{
            i=mid+1;
        }
        mid=(i+j)/2;
    }
    return 0;
}
int main(){
    vector<vector<int>> arr;
    vector<int> b1{1,2,3,4,5};
    vector<int> b2{6,7,8,9,10};
    vector<int> b3{11,12,13,14,15};
    vector<int> b4{16,17,18,19,20};
    vector<int> b5{21,22,23,24,25};
    arr.push_back(b1);
    arr.push_back(b2);
    arr.push_back(b3);
    arr.push_back(b4);
    arr.push_back(b5);
    bool a=binary2D(arr,1);
    cout<<a<<endl;


}