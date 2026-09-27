#include <bits/stdc++.h>

using namespace std;

int main(){
    long long k2,k3,k5,k6;
    long long x = min({k2,k5,k6});
    long long res = x * 256;
    if(x == k2){
        cout << res << endl;
    }
    else{
        long long t = min(k3,k2-x);
        cout << t * 32 + res;
    }

}