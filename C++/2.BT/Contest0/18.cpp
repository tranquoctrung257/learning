#include <bits/stdc++.h>

using namespace std;

int main(){
    long long a,b;
    cin >> a >> b;
    long long tmp = a;
    a = b,b = tmp;
    cout << 128 * a + 97 * b + 1000 << endl;
    
}