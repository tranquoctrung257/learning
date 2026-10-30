#include <bits/stdc++.h>

using namespace std;

bool nt(long long n){
    for(int i = 1;i<=sqrt(n);i++){
        if(n % i == 0){
            return false;
        }
    }
    return n>1;
}

int main(){
    long long n; cin >> n;
    if(nt(n)) cout << "YES";
    else cout << "NO";
}