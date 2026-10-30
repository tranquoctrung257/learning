#include <bits/stdc++.h>
#define ll long long

using namespace std;
// số hoàn hảo
bool shh(ll n){
	ll sum = 0;
	for(int i = 1; i <= sqrt(n);i++){
		if(n%i==0){
			sum +=i;
			if(i != n /i) sum +=i;
			// if này sử dụng cho trường hợp nó là số chính phương tránh trường hợp tính thằng đó 2 lần ví dụ số 16
		}
	}
	if(sum = n)return true;
	else return false;
}

int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	
	ll n; cin >> n;
	if(shh(n)){
		cout << "YES";
	}
	else cout << "NO";

}
