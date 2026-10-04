#include <iostream>
using namespace std;

// Viết hàm theo yêu cầu:
/*void nhapMang(int a[], int n){
    for (int i = 0; i < n; i++){
        cout<<"a["<<i<<"] = ";
        cin>>a[i];
    }
}
void inMang(int a[], int n){
    for (int i = 0; i < n; i++){
        cout<<a[i];
    }
}
void hoanDoi(int &a, int &b){
    int tmp = a;
    a = b;
    b = tmp;
}
void daoNguoc(int a[], int n){
    for (int i = 0; i < n/2; i++){
        int j = n-1-i;
        hoanDoi(a[i], a[j]);
    }
    
}*/
// Không được chỉnh sửa hàm main
int main() {
    int n;
    cin>>n;
    int *a = new int[n];
    for (int i = 0; i < n; i++) cin>>a[i];

    int m;
    cin>>m;
    int *old_a = new int[n];
    for (int i = 0; i < n; i++) old_a[i] = a[i];

    delete []a;
    a = new int[m+n];
    for (int i = 0; i < n; i++) a[i] = old_a[i];

    for (int i = n; i < m+n; i++) cin>>a[i];

    for (int i = n; i < m+n; i++) cout<<a[i]<<" ";
    return 0;
}