#include <iostream>
#include <cmath>
using namespace std;
int UCLN(int a, int b){
    cin>>a>>b;
    int u1,u2;
    int ans=1;
    for (int i = 1; i*i <= a; i++){
        if (a % i == 0) {
            u1 = i;
            u2 = a/i;
            if (b % u1==0 && u1>ans) ans=u1;
            else if (b % u2==0 && u2>ans) ans=u2;
        }
    }
    return ans;
}
int BCNN(int a, int b){
    int Bcnn;
    Bcnn = (a*b)/UCLN(a, b);
    return Bcnn;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<BCNN(a,b)<<endl;
    cout<<UCLN(a,b);
    return 0;
}
