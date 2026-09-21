#include <bits/stdc++.h>

using namespace std;

int main(){
    long long a,b,c,d;
    int q;
    cin >> a >> b >> c >> d;
    q = b/a;
    if(b*q == c && c*q == d ) cout << "YES" << endl;
    else cout << "NO" << endl;
}