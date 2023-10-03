#include<iostream>
#include<vector>
using namespace std;
int OddOcurringElement(vector<int> a){
    int l=0;
    int h=a.size()-1;
    while(l<=h){
        int mid=(l+h)/2;
        if(l==h){
            return h;
        }
        if(mid%2==0){
            if(a[mid]==a[mid+1]){
                l=mid+2;
            }
            else{
                h=mid;
            }
        }
        else{
            if(a[mid-1]==a[mid]){
                l=mid+1;
            }
            else{
                h=mid-1;
            }
        }
    }
    return -1;
}

int main(){
    vector<int> a{1,1,2,2,3,3,4,4,5,5,1};
    int b=OddOcurringElement(a);
    cout<<a[b]<<endl;

}