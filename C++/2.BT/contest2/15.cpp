#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
	int n; cin >> n;
	ll tong = 1;
	for(int i = 1; i <= n;i++){
		tong *= i;
	}	
	cout << tong << endl;
}