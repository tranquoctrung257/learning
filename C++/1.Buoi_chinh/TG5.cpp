#include <bits/stdc++.h>
#define ll long long

using namespace std;

// void xinchao();
// void hello();

// void xinchao(){
// 	cout << "hello!" << endl;
// 	hello();
// }

// nếu như này mà gọi thằng ở dưới thì sẽ không gọi được chương trình báo lỗi ngay | để khắc phục lỗi đấy thì ta dùng hàm 6 7

// void hàm không trả về 
// còn int float ll thì return về 1 giá trị nào đó

void hello(){
	cout << "xinchao";
}

void xinchao(){
	cout << "hello!" << endl;
	hello();
}
// cái mà mình trả về phải trùng với cái mà mình khai báo lúc ở đầu hàm
// giá trị truyền vào hàm đây gọi là tham số hình thức thôi
int nhandoi1(int n){
	return n = n * 2;
}
int nhandoi2(int &n){
	n = n * 2;
}

bool nto(int n){
    if(n<2)return false;
	for(int i = 2;i <= sqrt(n);i++){
		if(n%i==0) return false;
	}
	return true;
}

int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
//	xinchao();

	// h muốn gọi hàm và gấp đôi giá trị nào đó
//	int a = 50;
//	int s = nhandoi1(a);
//	cout << a << endl; // nó sẽ không có giá trị nhân đôi vì nó chỉ mượn giá trị thôi
//	nhandoi2(a);
//	cout << a << endl; // muốn đúng thì phải như này

	// mảng trong c++; lưu dãy các phần tử có cùng kiểu dữ liệu 
//	int a[10] = {1,2,4,5,4,5,3,23,3,4}; // khởi tạo mảng có 10 phần tử , các phần tử có chỉ số từ 0 đến n-1
//	cout << a[1] << endl;// in ra phần tử ở vị trí thứ nhất
//	cout << a[3];
	
	//a[10] bản chất của mảng là xin cấp phát 1 vùng nhớ từ 0 đến 9 
	
	// để đếm các phần tử là số chẵn trong mảng
//	int dem = 0;
//	for(int i = 0; i < 10;i++){
//		if(a[i] %2 == 0){
//			cout <<i <<":"<< a[i] << " ";
//			dem++;
//		}
//	}
//	cout << dem << endl;

//	int n;cin >> n;
//	int a[n]; // khởi tạo mảng a có n-1 phần tử
//	
////	vòng for để nhập n phần tử
//	for(int i = 0; i < n;i++){
//		cin >> a[i];
//	}
//	
////	vòng for để in phần tử ra
//
//	for(int i = 0; i < n;i++){
//		cout << a[i] << " ";
//	}
//	cout << endl;

// ví dụ làm bài tính tổng các phần tử là số nguyên tố trong mảng a có n phần tử
//input 
//5
//3 5 8 9 11
//output
//19

	// mảng trong hàm main không quá 10^6 phần tử
//	còn ở ngoài thì có thể lên đến 10^8 phần tử
	int n;cin >> n;
	int a[n];
	for(int i = 0; i < n;i++){
		cin >> a[i];
	}	
	int tong = 0;
	for(int i = 0; i<n;i++){
		if(nto(a[i])){
			tong += a[i];
		}
	}
	cout << tong;


}
