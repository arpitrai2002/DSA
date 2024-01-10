#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> FourSum(vector<int> a,int target){
	vector<vector<int>> ans;
	sort(a.begin(),a.end());

	for(int i=0;i<a.size();i++){
		if(i>0 && a[i]==a[i-1]){
			continue;
		}
		for(int j=i+1;j<a.size();j++){
			if(j!=i+1 && a[j]==a[j-1]){
				continue;
			}

			int left=j+1;
			int right=a.size()-1;

			while(left<right){
				long long sum=a[i];
				sum+=a[j];
				sum+=a[left];
				sum+=a[right];
				if(sum==target){
					vector<int> temp{a[i],a[j],a[left],a[right]};
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
				else if(sum<target){
					left++;
				}
				else{
					right--;
				}

			}

		}
	}
	return ans;

}
 
int main(){
	vector<int> a={0,1,-1,2,-2,2,-2,-1,-1,-4,5,8,6,8,2,7,3,4,2,5};
    vector<vector<int>> b=FourSum(a,14);
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