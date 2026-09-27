#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
	int n; cin >> n;
	double tong = 0;
	for(int i = 1; i <= n; i++){
		tong += 1.0/i;
	}
	cout << fixed << setprecision(3) << tong << endl;
}