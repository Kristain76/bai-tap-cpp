#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Viết hàm theo yêu cầu:
int main(){
    char c;
    cin>>c;
    if (c >= 'a' && c <= 'z') cout<<char(c-32);
    else cout<<c;
    return 0;
}
