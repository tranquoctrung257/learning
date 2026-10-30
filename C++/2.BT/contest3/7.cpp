#include <bits/stdc++.h>

using namespace std;

bool fibo(int n){
    long long f1 = 0, f2 = 1;
    if(n == 1 || n == 0) return true;
    for(int i = 2; i <= 92;i++){
        int fn = f1 +f2;
        f1 = f2;f2 = fn;
        if(fn == n) return true;
    }
    return false;
}

int main(){
    int n; cin >> n;
    if(fibo(n)) cout << "YES";
    else cout << "NO";
}