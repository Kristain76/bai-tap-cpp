#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

void tang(double &a){
    float a1 = a - int(a);
    float a2 = int(a);
    float a3 = int(a) + 0.5;
    float a4 = int(a) + 1;
    float ans = 0;
    if (a1 < 0.25) ans = a2;
    else if (a1 < 0.75) ans = a3;
    else if (a1 >= 0.75) ans = a4;
}
int main(){
    double a;
    cin>>a;
    tang(a);
    cout<<"Sau khi lam tron: "<<a;
    return 0;
}
