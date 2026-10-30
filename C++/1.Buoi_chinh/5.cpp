#include <bits/stdc++.h>
#define ll long long

using namespace std;

// số chính phương 4,1,16,25,169 hiểu đơn giải khi khai căn n thì nó ra 1 số nguyên

bool cp(int n){
	int c = sqrt(n);
	// hàm sqrt là trả về số thực nên ở đây ép kiểu để đưa về số nguyên để làm phép tính bên dưới 
	// nghĩa là nếu mà là số chính phương thì căn nó cx không bị mất đi
	if(c * c == n)return true;
	else return false;
}

int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	
	cout << cp(25) << endl;


}
