#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
	int cnt=1;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for (int i=0; i<n; i++){
			cin >> a[i];
		}
		int l=0;
		int r=n-1;
		int check = 1;
		while (l<r){
			if (a[l]!=a[r]){
				check = 0;
				break;
			}
			l++;
			r--;
		}
		if (check == 1) cout << "YES" << endl;
		else cout << "NO" << endl;
	}

}