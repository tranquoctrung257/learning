#include <bits/stdc++.h>

using namespace std;
using ll = long long;

// int main(){
// 	int n; cin >> n;
// 	ll tichUoc = 1;
// 	for(int i = 1; i <= n; i++){
// 		if(n % i == 0) tichUoc *= i;
// 	}
// 	cout << tichUoc;
// }


// code tối ưu không khuyến khích vì bài này test cho đến 1000 vòng lặp vẫn chạy được
int main(){
	int n; cin >> n;
	ll ans = 1;
	for(int i = 1; i <= sqrt(n);i++){
		if(n % i == 0){
			ans *= i;
			if(n/i != i){
				ans *= n/i;
			}
		}
	}
	cout << ans << endl;
}
