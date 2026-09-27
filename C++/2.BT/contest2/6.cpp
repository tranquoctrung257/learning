#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
	int n;cin >> n;
	ll tong = 0;
	for(int i = 1; i <= n;i++){
		tong += i;
	}
	cout << tong;
	// hoặc có công thức
	// cout << (n * (n + 1))/2 << endl;
}
