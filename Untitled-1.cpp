#include <iostream>
#include <cmath>
using namespace std;
int GTNN(int a, int b){
    if (a<b) return a;
    else return b;
}
int GTLN(int a, int b){
    if (a>b) return a;
    else return b;
}
int UCLN(int a, int b){
    // i % a => i < a
    // i % b => i < b
    // => i < min(a,b)
    for (int i = GTNN(a,b); i >= 1; i--){
        if (a % i == 0 && b % i == 0) return i;
    }
    return 1;
}
int BCNN(int a, int b){
    for (int i = 1; i <= a*b; i++){
        if (i % a == 0 && i % b == 0) return i;
    }
    return a*b;
}
int main(){
    cout<<UCLN(5, 15)<<endl<<BCNN(6, 8);
    return 0;
}
