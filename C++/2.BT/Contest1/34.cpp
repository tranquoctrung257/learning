#include <bits/stdc++.h>
#define ll long long

using namespace std;


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	// bài này chủ yếu check có chia hết cho 5 không nếu không chia hết cho 5 thì không thể xẩy ra 
	int a1,a2,a3,a4,a5;
	cin >> a1 >> a2 >> a3 >> a4 >> a5;
	int sum = a1+a2+a3+a4+a5;
	if(sum % 5 == 0){
		cout << sum / 5 << endl;
	}
	else cout << -1 << endl;
}
