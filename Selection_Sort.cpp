#include <iostream>
using namespace std;

void swap(int &a, int &b){
    int tmp = a;
    a = b;
    b = tmp;
}

void Selection_Sort(int a[], int n){
    for (int i=0; i<n; i++){
        int idx = i;
        for (int j=i+1; j<n; j++){
            if (a[idx]>a[j]){
                idx = j;
            }
        }
        swap(a[idx],a[i]);
    }
}
int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    Selection_Sort(a,n);
    for (int i=0; i<n; i++){
        cout << a[i] << " ";
    }
    return 0;
}