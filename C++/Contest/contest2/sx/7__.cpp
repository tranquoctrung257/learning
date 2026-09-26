#include <bits/stdc++.h>

using namespace std;

int main(){
	int n; cin >> n;
	long long tong = dem = 0;
	for(int i = 1; i <= n; i++){
		if(n % i == 0){
			dem ++;
			tong += i;	
		}
	}
	cout << dem << endl;
}