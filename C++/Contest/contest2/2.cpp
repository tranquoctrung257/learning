#include <bits/stdc++.h>

using namespace std;
using ll = long long;

// bài này muốn nhanh thì sử dụng logic bài 1
int main(){
	int n; cin >> n;
	ll dem = 0;
	for(int i = 1;i <= n;i++){
		if(n % i == 0) dem++;
	}
	cout << dem << endl;
	for(int i = 1;i <= n;i++){
		if(n % i == 0) 
		cout << i << " ";
	}
}