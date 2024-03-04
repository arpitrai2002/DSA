#include<iostream>

using namespace std;
#include <bits/stdc++.h> 
string reArrangeString(string &s)
{
	// Write your code here.
	int hash[26]={0};
	int len=s.size();

    for(int i = 0; i < len; i++) {
            hash[s[i]-'a']++;
    }
    
	int max_freq=INT_MIN;
	char max_char;

	for(int i=0;i<26;i++){
		if(hash[i]>max_freq){
			max_freq=hash[i];
			max_char=i+'a';
		}
	}

	int index=0;
    string ans;
	while(max_freq>0 && index<len){
		s[index]=max_char;
		index+=2;
		max_freq--;
	}


	if(max_freq!=0){
		return "";
	}
	hash[max_char-'a']=0;

	for(int i=0;i<26;i++){
		while(hash[i]>0){
			index=index>=len ? 1:index;
			s[index]=i+'a';
			hash[i]--;
			index+=2;
		}
	}
    // cout<<ans;
	return s;

}

 
int main(){
    string a="bbbbb";
    cout<<reArrangeString(a)<<endl;
 
 
 
 return 0;
}