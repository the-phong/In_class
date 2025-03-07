#include <iostream>
using namespace std;

int Csbatdau(int n){
    while(n>9){
        n/=10;
    }
    return n;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if (Csbatdau(n) == (n%10)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}