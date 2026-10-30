#include <bits/stdc++.h>
#define ll long long

using namespace std;

bool nt(long long n){
	for(int i = 2; i <= sqrt(n);i++){
		if(n%i==0){
			return false;
		}
	}
	
	return n>1;
}

bool tcsdlsnt(int n){
	while(n!=0){
		int res = n %10;
		if(res != 2 && res != 3 && res != 5 && res != 7){return false;}
		n/=10;
	}
	return true;
}
bool tcs(long long n){
	long long tong = 0;
	while(n!=0){
		int res = n %10;
		tong += res;
		n/=10;
	}
	if(nt(tong)) return true;
	return false;
}
// có thể gộp 2 hàm trên lại để tính nhanh hơn

bool csnt(int n){
	int sum = 0;
	while(n!=0){
		int res = n %10;
		sum += res;
		if(res != 2 && res != 3 && res != 5 && res != 7){return false;}
		n/=10;
	}
	if(nt(sum)) return true;
	else return false;
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int dem= 0;
	long long n,m;cin >> n >> m;
	for(int i = n;i <= m;i++){
//		if(nt(i) && tcsdlsnt(i) && tcs(i)){
//		if(nt(i) && csnt(i)){ // nếu muốn nhanh hơn thì để đk ít khản năng đúng lên đầu sẽ chạy nhanh hơn // điều kiện && mà thấy thằng đầu tiên false 1 phát sẽ ko check thằng thứ 2 || còn thằng hoặc thì thằng đầu tiên đúng r thì ko check thằng đằng sau nữa vì thằng đầu tiên đúng r thì sẽ đúng hết
		if(csnt(i) && nt(i)){
			dem++;
		}
	}
	cout << dem;
	

}
