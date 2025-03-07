#include <iostream>
#include <cmath>
#include <map>
using namespace std;

int main(){
	int t;
    cin >> t;
	int cnt=1;
	while(t--){
		map<int,int>mp;
		int n;
        cin >> n;
		for(int i=2;i<=sqrt(n);i++){
			while(n%i==0){
				n/=i;
				mp[i]++;
			}
		}
		if(n!=1){
			mp[n] = 1;
		}
        cout << "Test " << cnt << ": ";
		for(auto x : mp){
			cout << x.first << "(" << x.second << ")" <<" ";
		}
		cout << endl;
        cnt++;
	}
}
