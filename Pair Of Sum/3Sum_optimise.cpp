#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> ThreeSum(vector<int> a){
    vector<vector<int>> ans;
    sort(a.begin(),a.end());
    
    for(int i=0;i<a.size();i++){
        if(i>0 && a[i]==a[i-1]){
            continue;
        }
        int left=i+1;
        int right=a.size()-1;

        while(left<right){
            int sum=a[i]+a[left]+a[right];
            if(sum<0){
                left++;
            }
            else if(sum>0){
                right--;
            }
            else{
                vector<int> temp={a[i],a[left],a[right]};
                ans.push_back(temp);
                left++;
                right--;

                while(left<right && a[left]==a[left-1]){
                    left++;
                }
                while(left<right && a[right]==a[right+1]){
                    right--;
                }
            }
        }
    }
    return ans;
}
 
int main(){
    vector<int> a={0,1,-1,2,-2,2,-2,-1,-1,-4,5};
    vector<vector<int>> b=ThreeSum(a);
    for (auto &row : b)
    {
        for (auto &column : row)
        {
            cout << column << " ";
        }
        cout << endl;
    }
 return 0;
}