#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
	int n; cin >> n;
	ll tong = 0;
	for(int i = 1; i <= n;i ++){
		tong += i*i;
	}
	cout << tong; 
	// hoặc công thức tính nhanh
	// cout << (n *(n+1) * (2*n+1)) / 6 << endl;
}