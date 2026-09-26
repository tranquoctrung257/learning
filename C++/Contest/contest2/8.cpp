#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
	int n; cin >> n;
	ll tong = 0;
	// for(int i = 1; i <= n; i++){
	// 	if(i % 3 == 0){
	// 		tong += i;
	// 	}
	// }	
	// cout << tong ; 

	// hoặc có thể dùng cách này 
	// for(int i = 3; i <= n; i+=3){
	// 	tong += i;
	// }
	// cout << tong << endl;

	// hoặc có thể dùng công thức
	int m = n / 3;
	ll kq = 3ll * m * (m+1) /2;
	cout << kq << endl;

}