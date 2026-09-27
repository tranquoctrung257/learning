#include <bits/stdc++.h>
#define ll long long

using namespace std;


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int n; cin >> n;
	switch(n){
		case 1:
			cout << "chủ nhật" << endl;
			break;
		case 2:
			cout << "Thứ hai" << endl;
			break;
		case 3:
			cout << "Thứ ba" << endl;
			break;
		case 4:
			cout << "Thứ tu" << endl;
			break;
		case 5:
			cout << "Thứ nam" << endl;
			break;
		case 6:
			cout << "Thứ sau" << endl;
			break;
		case 7:
			cout << "Thứ bay" << endl;
			break;
		default:
			cout << "giá trị sai" << endl;
	}
	// switch chạy đến chỗ đúng là các phần dưới đều chạy | nếu muốn thoát nó ra thì dùng break

	// có thể nhập nhiều giá trị của switch
	// switch(n){
	// 	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
	// 		cout << 31 << endl;
	// 		break;
	// 	case 4: case 6: case 9: case 11:
	// 		cout << 30 << endl;
	// 		break;
	// 	case 2:
	// 		cout << 28 << endl;
	// 		break;
	// 	default:
	// 		cout << "giá trị sai" << endl;
	// }
	// kiểu nó sẽ vào trường hợp đúng là trôi xuống
	// switch(n){
	// 	case 1: 
	// 	case 3: 
	// 	case 5: 
	// 	case 7: 
	// 	case 8: 
	// 	case 10: 
	// 	case 12:
	// 		cout << 31 << endl;
	// 		break;
	// 	case 4: 
	// 	case 6: 
	// 	case 9: 
	// 	case 11:
	// 		cout << 30 << endl;
	// 		break;
	// 	case 2:
	// 		cout << 28 << endl;
	// 		break;
	// 	default:
	// 		cout << "giá trị sai" << endl;
	// }
	// thường thì họ sẽ viết ngang
	// còn nếu không có default thì nó sẽ không in gì cả nếu ko nhập đúng các giá trị ở trên 
	

}
