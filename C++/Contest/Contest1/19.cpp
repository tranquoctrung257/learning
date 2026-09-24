#include <iostream>

using namespace std;

int main(){
    int a;
    int n,m; cin >> m >> n >> a;
    int x, y;
    if(n % a == 0){x = n /a; }
    else x = n / a + 1;
    if(m % a == 0) y = m / a; 
    else y = m / a + 1; 
    cout << 1ll * x * y << endl;
}