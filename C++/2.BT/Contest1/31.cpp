#include <bits/stdc++.h>

using namespace std;

int main(){
    long long a1,a2,a3,b1,b2,b3,n;
    long long tong1 = 0, tong2 = 0, canh1 = 0, canh2 = 0;
    cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;
    tong1 = a1+a2+a3;
    tong2 = b1+b2+b3;
    if(tong1%5==0){
        canh1 = tong1 /5;
    }
    else canh1 = tong1 /5 +1;
    if(tong2%10==0){
        canh2 = tong2 /10;
    }
    else canh2 = tong2 /10 +1;
    if((canh1+canh2)<=n) cout << "YES" << endl;
    else cout << "NO" << endl;
    
}