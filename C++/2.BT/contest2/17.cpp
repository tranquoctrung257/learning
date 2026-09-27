#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
	ll n; cin >> n;
	int tong = 0;
	while(n != 0){
		tong += n % 10;
		n/= 10;
	}	
	cout << tong ;
}