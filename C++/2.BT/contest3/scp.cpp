#include <bits/stdc++.h>
#define ll long long

using namespace std;
bool cp(ll n){ // n ở đây lên tới 10^18 nên sẽ sai 
	ll c = sqrt(n);
	if(c * c == n)return true; // nếu c * c ở đây là int sẽ lỗi vì tràn số
	else return false;
}

int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	ll n; cin >> n;
	if(cp(n))cout << "YES";
	else cout << "NO";
	// 1000000000000000000
}
