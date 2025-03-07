#include <iostream>
#include <string>
#include <sstream>
#include <cctype>
using namespace std;

int main(){
    int t;
    cin >> t;
    scanf("\n");
    while(t--){
        string s;  
        getline(cin,s);
        stringstream ss(s);
        string tmp;
        while(ss >> tmp){
            tmp[0] = toupper(tmp[0]);
            for (int i = 1; i < tmp.length(); i++) tmp[i] = tolower(tmp[i]);
            cout << tmp << " ";
        }
        cout << endl;
    }
}