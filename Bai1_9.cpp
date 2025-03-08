#include <iostream>
#include <map>

using namespace std;

int main(){
	string s; cin >> s;
	int cnt=0;
	map<char,int>mp;
	for(int i=0;i<s.length()-1;i++){
		for(int j=i+1;j<s.length();j++){
			if(s[j]==s[i]){
				for(int k=i+1;k<j;k++){
					mp[s[k]]++;
				}
				for(auto x=mp.begin();x!=mp.end();x++){
					if((*x).second==1){
						cnt++;
					}
					(*x).second=0;
				}
				break;
			}
		}
	}
	cout << cnt/2;
}