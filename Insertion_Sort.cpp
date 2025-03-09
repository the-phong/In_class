#include <iostream>
using namespace std;

void swap(int &a, int &b){
    int tmp = a;
    a = b;
    b = tmp;
}

void Insertion_Sort(int a[], int n){
    for (int i=1; i<n; i++){
        int j=i;
        while(j>0 && a[j-1]>a[j]){
            swap(a[j],a[j-1]);
            j--;
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
    Insertion_Sort(a,n);
    for (int i=0; i<n; i++){
        cout << a[i] << " ";
    }
    return 0;
}