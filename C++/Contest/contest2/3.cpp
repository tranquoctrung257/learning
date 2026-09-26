#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
	ll n;cin >> n; 
	for(int i = 1;i <= sqrt(n);i++){
		// ở đây có 1 lỗi là 10^5 * 10^5 sẽ ra 10^10 nên sẽ bị tràn ở test case đó, nên ở đây nhân với long long
		cout << 1ll *i * i << " ";
	}
}