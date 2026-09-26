#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
	int n; cin >> n;
	int nhap;
	bool check = false;
	for(int i = 1; i <= n; i++){
		cin >> nhap;
		if(nhap == 2022)check = true;
	}	
	if(check) cout << "YES";
	else cout << "NO";
}