#include <iostream>
using namespace std;

void swap(int &a, int &b){
    int tmp = a;
    a = b;
    b = tmp;
}

void Bubble_Sort(int a[], int n){
    for (int i=0; i<n; i++){
        for (int j=0; j<n-i-1; j++){
            if (a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    Bubble_Sort(a,n);
    for (int i=0; i<n; i++){
        cout << a[i] << " ";
    }
    return 0;
}