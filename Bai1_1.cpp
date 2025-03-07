#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        long long a,b;
        cin >> a >> b;
        long long x=a, y=b;
        while(b!=0){
            int tmp = b;
            b = a%b;
            a = tmp;
        }
        cout << a << " " << (long long)(x*y/a) << endl;
    }
}
