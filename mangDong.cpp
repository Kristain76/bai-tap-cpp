#include <iostream>
using namespace std;



int main(){
    int *a = new int[3];
    a[0]=1;
    a[1]=2;
    a[2]=3;
    cout<<*(a+1)<<endl;
    //*(a+i) = a[i]
    for (int i = 0; i < 3; i++){
        cout<<*(a+i)<<endl;
    }
    
   // giải phóng vùng nhớ cũ, tạo vùng nhớ mới
   delete []a;
   a = new int[5];
    a[0]=1;
    a[1]=2;
    a[2]=3;
    a[3]=4;
    a[4]=5;
    for (int i = 0; i < 5; i++){
        cout<<*(a+i);
    }
    delete []a;
    return 0;
}