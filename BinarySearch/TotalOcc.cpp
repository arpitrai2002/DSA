#include<iostream>
#include<vector>
#include"firstOccNumber.h"
#include"LastOccNumber.h"
using namespace std;
 
int main(){
    vector<int> arr{1,2,2,2,2,3,3,3,4,6,6,7,8,9,9};
    int value=3;
    int a=firstOcc(arr,value);
    int b=LastOcc(arr,value);
    cout<<b-a+1<<endl;
 
 
 
 
 return 0;
}