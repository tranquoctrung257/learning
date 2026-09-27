#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
	int n; cin >> n;
	for(int i = 1; i<= n;i++){
		for(int j = 1; j <= i;j++){
			cout << "*";
		}
		cout << endl;
	}	
	cout << endl;
	// bài này có thể chạy i từ n về 1
	for(int i = 0; i<= n-1;i++){
		for(int j = 1; j <= (5 - i);j++){
			cout << "*";
		}
		cout << endl;
	}	
	cout << endl;
	for(int i = 1; i<= n;i++){
		for(int j = 1; j <= n;j++){
			if(j <= n - i){
				cout << " ";
			}
			else cout << "*";
		}
		cout << endl;
	}	
	cout << endl;
	for(int i = 1; i<= n;i++){
		for(int j = 1; j <= n;j++){
			if(j < i){
				cout << " ";
			}
			else cout << "*";
		}
		cout << endl;
	}	
	cout << endl;
	for(int i = 1; i<= n;i++){
		for(int j = 1; j <= n;j++){
			if(j == 1 || i == 5 || i == j){
				cout << "*";
			}
			else cout << " ";
		}
		cout << endl;
	}	
	cout << endl;

}

