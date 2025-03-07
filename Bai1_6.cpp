#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;  
        bool check = true;
        bool inc = (s[0] <= s[s.length()-1]);
        for (int i = 0; i < s.length() - 1; i++) {
            if ((inc && s[i] > s[i + 1]) || (!inc && s[i] < s[i + 1])) {
                check = false;
                break;
            }
        }
        if(check) cout << "YES\n";
        else cout << "NO\n";
    }
}
