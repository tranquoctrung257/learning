#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;cin >>n;
	long long tong = 0;
	for(int i = 1;i<=n;i++){
		if(i%2!=0){
			tong += (2*n-1);
		}
	}
	cout << tong << endl;
}