#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> Spiral(int n){
    int row=n;
    int col=n;
    int total=n*n;

    int start_row=0;
    int end_row=row-1;
    int start_col=0;
    int end_col=col-1;

    int count=0;

    vector<vector<int>> ans(n,vector<int>(n,0));

    while(count<total){
        for(int i=start_col;i<=end_col && count<total;i++){
            ans[start_row][i]=count+1;
            count++;
        }
        start_row++;

        for(int i=start_row;i<=end_row && count<total;i++){
            ans[i][end_col]=count+1;
            count++;
        }
        end_col--;

        for(int i=end_col;i>=start_col && count<total;i--){
            ans[end_row][i]=count+1;
            count++;
        }
        end_row--;

        for(int i=end_row;i>=start_row && count<total;i--){
            ans[i][start_col]=count+1;
            count++;
        }
        start_col++;

    }
    return ans;

}

 
int main(){
    int n=2;
    vector<vector<int>> ans=Spiral(n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
 
 
 
 return 0;
}

class Solution {
public:
    int sqr(int a){
    int l=0;
    int h=a;
    long mid=(l+h)>>1;
    int ans=0;
    while(l<=h){
        if(mid*mid==a){
            ans=mid;
            return ans;
        }
        else if(mid*mid<a){
            l=mid+1;
            ans=mid;
            
        }
        else{
            h=mid-1;
           

        }
        mid=(l+h)>>1;
    }
    return ans;
}
    int mySqrt(int x) {
        return sqr(x);
        
    }
};