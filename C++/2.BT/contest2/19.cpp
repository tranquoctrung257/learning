#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
	int n; cin >> n;
	for(int i = 1; i <= n;i++){
		for(int j = 1; j <= n;j++){
			cout << "*";
		}
		cout << endl;
	}	
	cout << endl;
	for(int i = 1; i <= n;i++){
		for(int j = 1; j <= n;j++){
			if(j == 1 || j == n || i == 1 || i == n){
				cout << "*";
			}
			else cout << " ";
		}
		cout << endl;
	}	
	cout << endl;
	for(int i = 1; i <= n;i++){
		for(int j = 1; j <= n;j++){
			if(j == 1 || j == n || i == 1 || i == n){
				cout << "*";
			}
			else cout << "#";
		}
		cout << endl;
	}	
	cout << endl;

	for(int i = 1; i <= n;i++){
		for(int j = 1; j <= n;j++){
			if(j == 1 || j == n || i == 1 || i == n){
				cout << i <<" ";
			}
			else cout << "  ";
		}
		cout << endl;
	}	
	cout << endl;




}