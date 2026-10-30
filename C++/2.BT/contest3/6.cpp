#include <bits/stdc++.h>

using namespace std;

void fibo(int n){
    long long f1 = 0, f2 = 1;
    cout << 1 << endl;
    for(int i = 2; i <= n;i++){
        int fn = f1 +f2;
        f1 = f2;f2 = fn;
        cout << fn << endl;
    }
}

int main(){
    int n; cin >> n;
    fibo(n);
}