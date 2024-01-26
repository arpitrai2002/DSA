#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 
int main(){ 
    vector<int> arr{1,2,2,2,2,2,2,3,3,3,3,3,3};
    auto ans1=lower_bound(arr.begin(),arr.end(),2);
    auto ans2=upper_bound(arr.begin(),arr.end(),2);

    cout<<"UPPER BOUND "<<arr.end()-ans2<<endl;
    cout<<"LOWER BOUND "<<ans1-arr.begin()<<endl;
 return 0;
}