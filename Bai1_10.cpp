#include <iostream>
#include <map>
#include <cmath>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if (n%2==0){
            map<int,int> mp;
            for (int i=2; i<=sqrt(n); i++){
                while(n%i==0){
                    n/=i;
                    mp[i] += 1;
                }
            }
            if (n>1){
                mp.insert(make_pair(n,1));
            }
            int p=1;
            for (auto x : mp){
                if (x.first != 2){
                    p*=(x.second+1);
                }
                else p*=x.second;
            }
            cout << p << endl;
        }
        else cout << 0 << endl;
        
    }
}