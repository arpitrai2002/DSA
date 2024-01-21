#include<iostream>
#include<vector>
using namespace std;
int waveprint(vector<vector<int>> a){
    int row=a.size();
    int col=a[0].size();
    int rc=0;
    while(rc<row){
        if(rc%2==0){
            for(int i=0;i<col;i++){
                cout<<a[i][rc]<<" ";
            }
        }
        else{
            for(int j=col-1;j>=0;j--){
                cout<<a[j][rc]<<" ";
            }
        }
        rc++;
    }

}

int main(){
    vector<vector<int>> a{{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    waveprint(a);

}