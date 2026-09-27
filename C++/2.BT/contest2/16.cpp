#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
	ll n;cin >> n;
	// trường hợp số 0 sẽ bị sai
	if(n == 0){
		cout << 1 << endl;
		return 0;
	}
	int dem = 0;
	while(n!=0){
		dem++;
		n/=10;
	}
	cout << dem;	
}