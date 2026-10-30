#include <iostream>

using namespace std;

int main(){
    // mảng là 1 cấu trúc dữ liệu giúp chúng ta có thể lưu nhiều phần tử có cùng kiểu dữ liệu với nhau

    // mảng trong tiếng anh là array 
    // cách khai báo 1 mảng 
    // kiểu_dữ_liệu_của_mảng biến_lưu_mảng[số_lượng_phần_tử_trong_mảng]
    // int a[5]; // mảng 1 chiều có 5 phần tử || máy tính sẽ cung cấp cho mình 5 phần tử để lưu giá trị trong mảng a | lúc khai báo mảng a thì giá trị mảng a là giá trị rác || điều kiện của mảng là các giá trị của mảng phải được nằm kề nhau trong các ô nhớ ram
    // ví dụ gán giá trị vào mảng a
    // giá trị của mảng chạy từ 0 đến n-1
    // a[0] = 1;
    // a[1] = 121;
    // a[2] = 44;
    // a[3] = 143;
    // a[4] = 1333;
    // cout << a[1]; // truy cập vào mảng a ở vị trí 1 = 121

    // bound checking trong ngôn ngữ c/c++ thì cú truy cập phần tử thoải mái nó ko check coi phần tử đó có hợp lệ hay không 

    // để khai báo biến a và khởi tạo nó
    int a[100] = {1,2,3,4,5};
    // cout << a[1] << endl;

    // nếu khai báo 1 mảng mà ko dùng các phần tử phía sau thì mặc định nó là 0 hết
    // cout << a[5];

    // để khai báo 1 mảng mà tất cả phần tử là số 0
    // int b[100] = {0};
    // cout << b[1] << endl;

    // int b[100] = {1,2,3,4,5,6};
    // // để cho vòng for duyệt tất cả phần tử trong mảng
    // for(int i = 0; i < 100;i++){
    //     cout << b[i] << endl;
    // }

    // để in vòng for từ cuối về
    // for(int i = 9;i>=0;i--){
    //     cout << b[i] << endl;
    // }

    // để nhập mảng từ bàn phím form câu hỏi về mảng sẽ là dòng đầu tiên là số phần tử trong mảng dòng 2 là các phần tử trong mảng.// để nhập phần tử ta làm như sau

    // int n; cin >> n;
    // int a[n];
    // for(int i = 0; i < n;i++){
    //     cin >> a[i];
    // }
    // // để duyệt các phần tử trong mảng
    // for(int i = 0; i < n;i++){
    //     cout << a[i] << " ";
    // }

    // int n; a[n]; như thế này là sai vì khi gán n cho a có bao nhiêu giá trị thì n có thể là giá trị rác của n; cách fix là nhập cin trước

    // còn cách 2 là dạng bài toán cho biết giá trị của mảng ví dụ cho số nguyên a không quá 1000 phần tử thì lúc đó ta có thể khai báo a[1000] khi đó a đã có 1000 phần tử; nếu a đề bài cho 1000 phần tử mà khai báo trước có 100 phần tử thôi thì biến a sẽ không đủ để lưu số phần tử \\ có thể khai báo thừa phần tử rồi vứt đấy ko sao cả 

    // ví dụ cho 1 mảng từ khoảng -10^12 <= a[i] <= 10^12
    // int n;cin >> n;
    // long long a[n];

    // tính năng mới của c++ từ c++ 11 trở lênh
    // for each
    // for(kiểu_dư_liệu biến_tạm :mảng)
    // for(long long temp:a){
    //     cout << temp << " ";
    // }

    // có 2 cách duyệt qua chỉ số và for each 2 cách i hệt nhau 
    // cái chỉ số phù hợp khi thay đổi các phần tử trong mảng thông qua chỉ số
    // còn for each phù hợp cho việc in các phần tử trong mảng ra thôi 
    // for each hoạt động 
    // vòng lặp đầu tiên sẽ gán giá trị 0 cho temp, rồi vòng thứ 2 gán giá trị 1 đến khi hết giá trị mảng thì thôi.

    // ví dụ tính tổng các phần tử trong mảng

    int sum = 0;
    int n; cin >> n;
    int mang[n];
    for(int i = 0; i < n;i++){
        cin >> mang[i]; 
    }
    // for(int i = 0; i < n;i++){
    //     sum+=mang[i]; 
    // }
    // cout << sum;
    // hoặc 
    // for(long long temp:mang){
    //     sum+=temp;
    // }

    // nhưng khi duyệt các phần tử trong mảng mà gấp đội nó thì for each lại không được

    // for(int i = 0; i < n; i++){
    //     a[i] *= 2;
    // }

    // nhưng for eatch lại không được nó không thay đổi mảng cũ vì for x nó chỉ lấy phần tử trong mảng gán tạm cho thằng x nào đó thôi.
    // còn làm việc qua chỉ số thì sẽ làm việc qua ô nhớ đấy r nên sẽ thay đổi phần tử 
    // for(int x:mang){
    //     x*=2;
    // }
    // nhưng mà thêm dấu và trước x thì lại khác nó sẽ thay đổi phần tử trong mảng chứ không gán đơn thuần nữa hiểu nôm na là nó quản lý ô nhớ đó luôn
    // for(int &x:mang){
    //     x*=2;
    // }
    // for(int i = 0; i < n; i++){
    //     cout << mang[i] << " ";
    // }
    // nếu duyệt bằng chỉ số thì có thể dừng ở chỉ số nào đó cũng được còn for each thì nó sẽ duyệt tất cả phần tử luôn ví vụ khai báo 100 phần tử mà nhập 10 phần tử
    // phút 35


}