#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b){
	while(b != 0){
		int du = a % b;
		a = b;
		b = du;
	}
	return a;
} // hàm này chạy cực kì là nhanh 

int lcm(int a,int b){
	return a*b /gcd(a,b);
	return a/gcd(a,b) * b; // như thế này sẽ tránh tràn số
	
}

//kiếm tra 1 số có phải là số fibonacii hay ko 
// để kt thì sinh 1 hàm có tất các các số fibonacii mà c++ lưu đươc
//c++ lưu được 9*10^18
//https://r-knott.surrey.ac.uk/fibonacci/fibtable.html
// 97 số fibo đầu tiên thì có thể lưu được bằng kiểu dữ liệu là long long 
// thì để kiểm tra thì sinh các số fibo từ 0 đến 92

bool checkfibo(long long n){
	if(n == 0 || n == 1) return true;
	int f1 = 1,f2 = 0;
	for(int i = 2 ;i <= 92;i++){
		long long fn = f1 + f2;
		if(n = fn) return true;
		f2 = f1;
		f1 = fn;
	}
	return false;
}
// cả 2 cách tốc độ đều như nhau
bool checkfibo2(long long n){
	long long fibo[100];
	fibo[0] = 0;
	fibo[1] = 1;
	for(int i = 2; i <= 92; i++){
		fibo[i] = fibo[i-1] + fibo[i-2];
	}
	for(int i = 0; i <= 92; i++){
		if(fibo[i] == n) return true;
		return false;
	}
}

// để in ra n số fibo 
void checkfibo3(long long n){
	long long fibo[100];
	fibo[0] = 0;
	fibo[1] = 1;
	for(int i = 2; i <= 92; i++){
		fibo[i] = fibo[i-1] + fibo[i-2];
	}
	for(int i = 0; i < n; i++){
		cout << fibo[i] << endl;
	}
}

//f2= 0
//f1 = 1
//i = 2: fn = 1
//i = 3: f2 = 1, f1 = 1 => fn = 2 
//i = 4: f2 = 1, f1 = 2 => fn = 3

int phi(int n){
	int res = n;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
//			i là thừa số nguyên tố của n
			res = res - res / i;
			while(n % i ==0){
				n /=i;
			}
		}
	}
	if(n > 1){
		res = res - res /n;
	}
	return res;
}
//cách tính tổ hợp dựa vào công thức.
//cách này thì lâu
long long gt(int n){
	long long res = 1;
	for(int i = 1; i <= n;i++) res *= i;
	return res;
}
long long tohop(int n, int k){
	long long ngt = gt(n);
	long long kgt = gt(k);
	long long nkgt = gt(n - k);
	return ngt /(kgt * nkgt);
}
// hoặc có cách tính khác
long long tohop2(int n,int k){
	long long res = 1;
	k = min(k,n-k);
	for(int i = 1;i <= k;i++){
		res *= (n - i + 1);
		res /= i;
	}
	return res;
}

// hoặc áp dụng cho mảng 2 chiều áp dụng cho n với k lớn
long long tohop3(int n,int k){
	// C[i][j]: tổ hợp chập j của i
	long long C[n +1][k+1];
	for(int i = 0; i <= n;i++){
		for(int j = 0; j <= i; j++){
			if(i == 0 || i == j) C[i][j] = 1;
			else C[i][j] = C[i - 1][j] + C[i-1][j-1];
		}
	}
}

// để sàng được các số ngto <= n: phải tạo được mảng cỡ n+1 phần tử
const int n = 1000000;
bool nt[n+1];
void sang(){
	// coi tất cả các số từ 0 đến n là số ngto
//	nt[i] = true;
	for(int i = 0;i <= n;i++){
		nt[i] = true;}
	nt[0] = nt[1] = false; // 0 và 1 không phải là số ngto
//		duyệt từ 2 đên căn bậc 2 của n
	for(int i = 2; i <= sqrt(n);i++){
		// nếu i là snt
		if(nt[i] == true){
			// loại các bội của i
			for(int j = i * i; j <= n; j += i){
				nt[j] = false;
			}
		}
	}
	
}

//số thuận nghịch
bool thuanNghich(int n){
	int lat = 0, temp = n;
	while(n){
		int du = n % 10;
		lat = lat * 10 + du;
		n /= 10;
	}
	if(lat == temp) return true;
	else return false;
}
int main(){
	// ước chung lớn nhất và bội chung nhỏ nhất
	
	// ví dụ cho 2 số a và b tìm ước chung lớn nhất của 2 số đó; 
//	ví dụ 20 và 15 đi thì nó sẽ chạy từ 15 về 1 số nào mà là số đầu tiên chia hết cho số 15 và 20 thì đó là ước chung lớn nhât
// nhưng cách này rất lâu nên người ta sẽ sử dụng giải thuật là euclid
// gọi gcd là ucln 
// gcd(a,b) = gcd(b,a%b) mà số dư đằng sau bằng = 0 thì ước sẽ là số b

//ví dụ a = 20, b = 18
//gcd(20,18) = gcd(18,2)= gcd(2,0) ==> ước chung lớn nhất ở đây là 2

//ví dụ a = 18, b = 5
//gcd(18,5) = gcd(5,3) = gcd(3,2) = gcd(2,1) = gcd(1,0) ==> ước chung nhỏ nhất là 1
// code ra hàm ở dòng 5

//BCNN(a,b) = a*b/ucln(a,b) hàm sẽ là dòng 14 // số bé nhất lớn hơn a,b mà chia hết cho a,b
	
//	cout << lcm(15,10) << endl;
//	hoặc hàm có sẵn trong thư viện str là hàm __gcd
//	cout << __gcd(10,5)  << endl;

//	co_prime: nguyên tố cùng nhau hoặc là đồng ngto vd 8,5 2,5,7 nghĩa là bội dung nhỏ nhất của nó bằng 1 thì nó sẽ là 2 số nguyên tố cùng nhau

// số fibonaci bắt đầu từ số 0 1 và tiếp theo là 1 2 3 5 8 13 ,... nghĩa là từ số thứ 3 trở đi sẽ lấy 2 số đằng trước cộng lại với nhau
// sẽ có bài toán là kiểm tra 1 số có phải số fibonaci hay không hoặc là in ra n số fibonaci đầu tiên

// thì sẽ dùng quy hoạch động để giải quyết bài này

//	checkfibo3(93); // các số lớn hơn thì sẽ ko in ra được vì sẽ bị tràn

//	phi hàm euler
	
//	cout << phi(140) << endl;

//	tổ hợp chập k của n
//	cout << tohop(10,2) << endl;

//	sàng số nguyên tố
//	sang();
//	int n = 100000;
//	for(int i = 0; i <= n; i++){
//		if(nt[i] == true){
//			cout << i << " ";
//		}
//	}
	
	// số thuận nghịch
	cout << thuanNghich(12321) << endl;
	
}