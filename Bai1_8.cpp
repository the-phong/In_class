#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(){
    int t;
    cin >> t;
    scanf("\n");
    while(t--){
        string s;
        getline(cin,s);
        stringstream ss(s);
        string tmp, x[50];
        int k = 0;
        while(ss >> tmp){
            tmp[0] = toupper(tmp[0]);
            for(int i=1; i<tmp.length(); i++) tmp[i] = tolower(tmp[i]);
            x[k++] = tmp;
        }
        for (int i=0; i<x[0].length(); i++){
            x[0][i] = toupper(x[0][i]);
        }
        for (int i=1; i<k-1; i++){
            cout << x[i] << " ";
        }
        cout << x[k-1] << ", " << x[0] << endl; 
    }
}