#include <iostream>
using namespace std;
void inMang(int a[], int n){
    for (int i = 0; i < n; i++){
        cout<<a[i]<<" ";
    }
}
void nhapMang(int a[], int n){
    for (int i = 0; i < n; i++){
        cout<<"a["<<i<<"] = ";
        cin>> a[i];
    }
}
int main(){
    int n;
    cout<<"So luong phan tu: ";
    cin>>n;
    int a[n];
    nhapMang(a, n);
    inMang(a, n);

    return 0;
}