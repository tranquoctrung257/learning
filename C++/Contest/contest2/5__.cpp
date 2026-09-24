#include <bits/stdc++.h>

using namespace std;

int main(){
	int n; cin >> n;
	double tong = 0;
	for(int i = 1;i<=n*2;i++){
		if(i % 2 == 0){
			tong += 1.0/i;
		}
	}
	cout << tong << endl;
}