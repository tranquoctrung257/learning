# 01. [28TECH LẬP TRÌNH C++]. CONTEST 1. LÀM QUEN HACKERRANK VÀ VÀO RA TRONG C++

## [Làm quen với OJ]. Bài 1. Print Hello World
**Problem | Submissions | Discussions**

Nhiệm vụ của bạn ở bài tập này rất đơn giản, bạn hãy nhập vào 1 số nguyên `x` và in ra 3 dòng:
* Dòng 1: là số `x` bạn vừa nhập từ bàn phím.
* Dòng 2: in ra dòng chữ `"Hello World!"`
* Dòng 3: in ra `"28tech C++ programming!"`

**Gợi ý:** Bạn cần nhập 1 số rồi in ra số đó chứ không phải in ra số 5, 5 chỉ là 1 trường hợp cụ thể. Chú ý in sao cho đúng từng dấu cách dấu `!`

**Mã nguồn bạn triển khai như sau:**
```cpp
int main(){
    //khai bao va nhap n tu ban phim
    //in ra n
    //In ra hello world
    //In ra 28tech C++ programming
}
```

**Input Format**
1 dòng duy nhất chứa số nguyên `x`

**Constraints**
`1 <= x <= 1000`

**Output Format**
In ra 3 dòng theo yêu cầu

**Sample Input 0**
```
5
```
**Sample Output 0**
```
5
Hello World!
28tech C++ programming!
```

---

## [Làm quen với OJ]. Bài 2. Print number
**Problem | Submissions | Discussions**

Đề bài yêu cầu bạn nhập: Dòng 1 là số nguyên `X`, dòng 2 là số nguyên `Y`, dòng 3 là kí tự `C`, dòng 4 là số thực float `F`, dòng 5 là số thực double `D`. 
Nhiệm vụ của bạn là in ra 5 dòng: 
* Dòng 1 in `X`
* Dòng 2 in `Y`
* Dòng 3 in `C`
* Dòng 4 in `F` với 2 số đằng sau dấu phẩy
* Dòng 5 in `D` với 9 số sau dấu phẩy

**Gợi ý:** Chú ý dùng `fixed` và `setprecision` để in ra `F` và `D` cho chính xác, `Y` cần là số `long long` nếu không sẽ bị tràn dữ liệu và không lưu được.

```cpp
int main(){
    //Khai báo 5 biến x, y, c, f, d
    //In ra x
    //In ra y
    //In ra c
    //In ra F sử dụng fixed và setprecision
    //In ra D sử dụng fixed và setprecision
}
```

**Input Format**
5 dòng lần lượt là `X`, `Y`, `C`, `F`, `D`

**Constraints**
`-10^9 <= X <= 10^9`; `-10^18 < Y <= 10^18`; `C` là kí tự in hoa hoặc in thường; `-10^6 <= F <= 10^6`; `-10^9 <= D <= 10^9`

**Output Format**
In ra 5 dòng theo yêu cầu

**Sample Input 0**
```
614
999999999999999528
G
19.084
2.9648
```
**Sample Output 0**
```
614
999999999999990528
G
19.09
2.964800000
```

---

## [Làm quen với OJ]. Bài 3. Print expression
**Problem | Submissions | Discussions**

Cho 4 số `X, Y, Z, T` là số nguyên được nhập từ bàn phím. Bạn hãy in ra 3 dòng:
* Dòng 1: lần lượt 4 số `Y, Z, X, T` mỗi số cách nhau một dấu phẩy
* Dòng 2: in ra tổng 4 số
* Dòng 3: in ra giá trị của biểu thức `X - Y + Z * T`

*(Chú ý giá trị của tích `Z * T` và giá trị của tổng 4 số có thể tràn kiểu dữ liệu int)*

**Gợi ý:** Tổng 4 số có thể bị tràn nên cần ép kiểu long long: `tong = (long long) x + y + z + t;`. Khi tính `X - Y + Z * T` thì cần ép kiểu `Z * T` vì nó sẽ bị tràn. Nếu không muốn ép kiểu thì bạn khai báo luôn 4 biến x, y, z, t là `long long`.

**Input Format**
1 dòng chứa 4 số `X, Y, Z, T`

**Constraints**
`1 <= X, Y, Z, T <= 10^9`

**Output Format**
In ra theo yêu cầu đầu bài

**Sample Input 0**
```
93 9 93 98
```
**Sample Output 0**
```
9,93,93,98
293
9198
```

---

## [Làm quen với OJ]. Bài 4. Hàm pow
**Problem | Submissions | Discussions**

Cho 2 số `x, y`. Nhiệm vụ của bạn là tính $x^y$.

**Gợi ý:** $x^y$ sẽ không có phần lẻ thập phân vì `x, y` đều nguyên. Hàm `pow` trả về `double` nên bạn không được in ra luôn `cout << pow(x, y)`. Với kết quả nhỏ thì không sao nhưng nếu kết quả lớn nó sẽ in ra dạng số thực, bạn thử `cout << pow(10, 10)` để xem thử kết quả. Cách làm đó là ép `pow` sang `long long` trước khi in hoặc lưu `pow(x, y)` vào 1 số nguyên `long long` rồi in ra.

```cpp
int main(){
    //Nhập x, y
    //Khai báo biến số nguyên kq = pow(x, y)
    //In ra biến kq
}
```

**Input Format**
1 dòng chứa 2 số nguyên dương `x, y` viết cách nhau một dấu cách

**Constraints**
`1 <= x, y <= 12`

**Output Format**
In ra $x^y$, nếu có phần thập phân thì in ra 2 số sau dấu phẩy, nếu không có phần thập phân thì không cần in. *(Lưu ý x, y nguyên thì sẽ không có thập phân)*

**Sample Input 0**
```
2 2
```
**Sample Output 0**
```
4
```
**Sample Input 1**
```
4 1
```
**Sample Output 1**
```
4
```

---

## [Làm quen với OJ]. Bài 5. Hàm sqrt và cbrt
**Problem | Submissions | Discussions**

Cho số nguyên dương `N`, nhiệm vụ của bạn là tính căn bậc 2 và căn bậc 3 của `N`.

**Input Format**
Dòng duy nhất chứa số nguyên dương `N`

**Constraints**
`1 <= N <= 10^9`

**Output Format**
* Dòng 1: in ra căn bậc 2 của `N` với 2 số sau dấu phẩy.
* Dòng 2: in ra căn bậc 3 của `N` với 3 số sau dấu phẩy.

**Sample Input 0**
```
65
```
**Sample Output 0**
```
8.06
4.021
```
**Sample Input 1**
```
15
```
**Sample Output 1**
```
3.87
2.466
```

---

## [Làm quen với OJ]. Bài 6. Hàm ceil, floor, round
**Problem | Submissions | Discussions**

* Hàm `ceil`: làm tròn lên số nguyên gần nhất
* Hàm `floor`: làm tròn xuống số nguyên gần nhất
* Hàm `round`: làm tròn số nguyên phụ thuộc vào phần thập phân

Cho số thực `X`, nhiệm vụ của bạn là sử dụng 3 hàm trên để tìm số nguyên nhỏ hơn gần `X` nhất, số nguyên lớn hơn gần `X` nhất, số nguyên gần `X` nhất.

**Gợi ý:** Nên nhớ hàm `ceil`, `floor`, `round` trả về số `double`. Các bạn in ra kết quả luôn hàm `ceil`, `round`, `floor` đối với số nhỏ thì không vấn đề gì nhưng với số lớn nó có thể xuất hiện số 0 ở sau. Ví dụ `cout << ceil(1000000) << endl` kết quả in ra sẽ là `1000000.0`

**Input Format**
Dòng duy nhất chứa số thực `X`

**Constraints**
`1 <= X <= 10^6`

**Output Format**
In ra 3 số trên 3 dòng: `floor(X)`, `ceil(X)`, `round(X)` (Dựa theo logic đề bài)

**Sample Input 0**
```
3.59
```
**Sample Output 0**
```
3
4
4
```
**Sample Input 1**
```
5.58
```
**Sample Output 1**
```
5
6
6
```

*(Lưu ý: Sample Output 0, 1 bị trống trong raw text, giả định theo chức năng)*

---

## [Làm quen với OJ]. Bài 7. Chữ số cuối cùng và 2 chữ số cuối cùng
**Problem | Submissions | Discussions**

Cho nguyên dương `N`, bạn hãy sử dụng phép chia dư để lấy ra chữ số cuối cùng và 2 chữ số cuối cùng của `N`.

**Gợi ý:** 
* Để lấy chữ số cuối cùng của `N` bạn chỉ cần lấy `N` chia dư cho 10. Ví dụ `N = 1234 % 10 = 4`. 
* Tương tự để lấy 2 chữ số cuối cùng của `N` bạn chỉ cần lấy `N` chia dư cho 100. Ví dụ `N = 1234 % 100 = 34`.
* Lưu ý chọn kiểu dữ liệu của `N` cho phù hợp.

```cpp
int main() {
    //Khai báo biến nguyên n
    //Nhập n từ bàn phím
    //In ra n % 10
    //In ra n % 100
}
```

**Input Format**
1 dòng duy nhất chứa số nguyên dương `N`

**Constraints**
`100 < N <= 10^18`

**Output Format**
* Dòng 1 in ra chữ số cuối cùng. 
* Dòng 2 in ra 2 chữ số cuối cùng, nếu 2 chữ số cuối cùng của `N` có số 0 ở đầu thì bạn bỏ đi số 0 đó và chỉ in ra số cuối cùng.

**Sample Input 0**
```
1005
```
**Sample Output 0**
```
5
5
```

---

## [Làm quen với OJ]. Bài 8. Phép chia
**Problem | Submissions | Discussions**

Trong ngôn ngữ lập trình như C, C++, Java khi bạn sử dụng 2 số nguyên để chia cho nhau thì kết quả của phép chia đó chỉ giữ lại phần nguyên cho dù bạn có để kết quả ở số thực như `float` hay `double`. Ví dụ `a = 10, b = 3` thì phép chia `a / b` sẽ có kết quả là `3` thay vì `3.3333`, để lấy được phần thập phân khi chia 2 số nguyên cho nhau bạn cần thực hiện ép kiểu `a` hoặc `b` hoặc cả 2 sang dạng số thực trước khi chia. Ví dụ `float c = (float) a / b` thì khi đó `c = 3.3333`.

**Gợi ý:** Bạn nên sử dụng số `double` khi chia thập phân để kết quả có độ chính xác tốt hơn.

**Input Format**
1 dòng duy nhất chứa lần lượt 2 số nguyên `b` và `a` *(Lưu ý: đề bài nói b và a)*

**Constraints**
`1 < a, b <= 1000`

**Output Format**
* Dòng 1 in ra thương của `a / b` khi sử dụng phép chia nguyên.
* Dòng 2 in ra thương của `a / b` khi sử dụng phép chia lấy phần thập phân với độ chính xác 2 số sau dấu phẩy.

**Sample Input 0**
```
3 8 
```
*(Giả định b = 3, a = 8 từ sample output)*
**Sample Output 0**
```
2
2.67
```
*(Ghi chú: Đề mẫu bị lỗi số liệu 3 8.70 thành 2, 2.33. Trình bày lại y hệt text)*
**Sample Input 0** (theo text)
```
3 8.70 
```
**Sample Output 0** (theo text)
```
2
2.33
```
**Sample Input 1**
```
39 259
```
**Sample Output 1**
```
6
6.64
```

---

## [Làm quen với OJ]. Bài 9. Xóa số
**Problem | Submissions | Discussions**

Cho số nguyên dương `N` có ít nhất 5 chữ số, nhiệm vụ của bạn là xóa đi 3 chữ số cuối cùng của `N` và in ra những chữ số còn lại. 
Ví dụ `N = 12345` sau khi xóa đi 3 chữ số cuối cùng thì `N = 12`. 

**Gợi ý:** Đối với phép chia nguyên nếu bạn muốn xóa đi 1 chữ số cuối cùng chỉ cần lấy `N` chia nguyên cho 10, ví dụ `N = 12345 / 10 = 1234`, tương tự `N = 12345 / 100 = 123`, `N = 12345 / 1000 = 12`...

**Input Format**
Dòng duy nhất chứa số nguyên dương `N`

**Constraints**
`10000 <= N <= 10^18`

**Output Format**
In ra `N` sau khi xóa đi 3 chữ số cuối cùng

**Sample Input 0**
```
999999999999993728
```
**Sample Output 0**
```
999999999999993
```

---

## [Làm quen với OJ]. Bài 10. Phép chia dư
**Problem | Submissions | Discussions**

Khi bạn chia dư 1 số cho số nguyên `N` thì số dư của phép chia đó sẽ là các số từ `0` tới `N - 1`. Ví dụ khi bạn chia cho 5 thì phép chia có số dư có thể là `0, 1, 2, 3, 4`. Bài toán này yêu cầu các bạn nhập 2 số `a` và `b` sau đó tìm phép dư khi chia `a` cho `b`.

**Input Format**
Dòng duy nhất chứa 2 số nguyên `a, b`, giữa `a` và `b` chứa 5 dấu cách.

**Constraints**
`1 <= a, b <= 10^6`

**Output Format**
In ra số dư khi chia `a` cho `b`

**Sample Input 0**
```
806     605
```
**Sample Output 0**
```
201
```

---

## [Làm quen với OJ]. Bài 11. Nhân chia
**Problem | Submissions | Discussions**

Cho số nguyên `N` hãy in ra kết quả của những phép toán sau:
* Dòng 1: In ra 2 lần số `N`.
* Dòng 2: In ra 10 lần số `N`.
* Dòng 3: In ra kết quả của phép chia nguyên của `N` với 2.
* Dòng 4: In ra kết quả của phép chia lấy phần thập phân của `N` với 2, in ra 3 chữ số phần thập phân.

**Gợi ý:** Khi nhân `N` với 10 có thể bị tràn, vì `N` tối đa là `10^9 => 10 * N = 10^{10}` vượt giới hạn số `int` nên bạn cần xử lý tràn chỗ đó.

**Input Format**
Dòng duy nhất chứa số nguyên dương `N`

**Constraints**
`1 <= N <= 10^9`

**Output Format**
In ra 4 dòng theo yêu cầu, mỗi kết quả cách nhau thêm 1 dòng trống, xem output để rõ hơn yêu cầu. *(Text mẫu không có dòng trống)*

**Sample Input 0**
```
570
```
**Sample Output 0**
```
1140
5700
285
285.000
```

---

## [Làm quen với OJ]. Bài 12. Hàm F(x, y)
**Problem | Submissions | Discussions**

Cho $F(x,y) = 5*x + 2*y + x*y$, với `x, y` được nhập từ bàn phím hãy in ra kết quả của $F(x,y)$. Mỗi khi tính toán kết quả phải chú ý tới giới hạn của bài toán, để xác định xem kết quả của bài toán sẽ nằm tới ngưỡng nào để lựa chọn kiểu dữ liệu cho phù hợp.

**Gợi ý:** Chú ý $x*y$ có thể bị tràn.

**Input Format**
Dòng duy nhất chứa 2 số `x, y` trên 1 dòng.

**Constraints**
`x, y` là số nguyên; `1 <= x, y <= 10^6`

**Output Format**
In ra kết quả của hàm $F(x,y)$

**Sample Input 0**
```
6 3
```
**Sample Output 0**
```
54
```

---

## [Làm quen với OJ]. Bài 13. Lớn nhất, nhỏ nhất
**Problem | Submissions | Discussions**

Cho 4 số nguyên `x, y, z, t`. Như bạn đã biết, để tìm số lớn nhất và nhỏ nhất trong 2 số ta có thể sử dụng hàm `max, min` của thư viện `math`. Ngoài ra để tìm max, min của nhiều số bạn có thể sử dụng hàm `max, min` của thư viện, ví dụ để tìm max của `a, b, c` có thể dùng `max({a, b, c})`, chú ý đặt các biến vào trong ngoặc nhọn nếu muốn tìm max, min của 3 số trở lên. 

Bài toán yêu cầu bạn tìm những số sau:
* Dòng 1: in ra số lớn hơn trong 2 số `x, y`.
* Dòng 2: in ra số nhỏ hơn trong 2 số `z, t`.
* Dòng 3: in ra số lớn nhất trong 3 số `x, y, z`.
* Dòng 4: in ra số nhỏ nhất trong 4 số `x, y, z, t`.

Ví dụ tìm max, min của 3 số:
```cpp
#include <algorithm>
int a = 20, b = 30, c = 40; 
cout << max({a, b, c}) << endl;
cout << min({a, b, c}) << endl;
```
Nếu dùng Dev C++ mà không chạy được hàm max, min với 3 số trở lên thì bạn cần chạy với chuẩn C++11 trở lên mới hỗ trợ. *(Vào devc => tool => compiler option => setting => code generation => language standard => GNU C++11 OK)*

**Input Format**
4 số `x, y, z, t` lần lượt trên 4 dòng.

**Constraints**
`1 <= x, y, z, t <= 1000`

**Output Format**
In ra 4 dòng theo yêu cầu.

**Sample Input 0**
```
586
617
778
37
```
**Sample Output 0**
```
617
37
778
37
```

---

## [Làm quen với OJ]. Bài 14. Number in range
**Problem | Submissions | Discussions**

Cho 2 số `a` và `b`, nhiệm vụ của bạn là in ra số lượng số nguyên tính từ `a` đến `b`.

**Input Format**
Dòng duy nhất chứa 2 số nguyên `a` và `b`.

**Constraints**
`1 <= a <= b <= 10^12`

**Output Format**
In ra kết quả của bài toán

**Sample Input 0**
```
14 19
```
**Sample Output 0**
```
6
```

---

## [Làm quen với OJ]. Bài 15. Mua vở
**Problem | Submissions | Discussions**

28tech đi mua vở, anh ta có `N` đồng, mỗi quyển vở có giá `X` đồng. Hỏi anh ta mua được tối đa bao nhiêu quyển vở? Ví dụ anh ta có 15 đồng và mỗi quyển vở có giá 6 đồng thì anh ta mua được 2 quyển, vậy trong lập trình bạn tính như thế nào?

**Input Format**
1 dòng duy nhất chứa 2 số nguyên `N` và `X`

**Constraints**
`1 <= X <= 1000`; `0 <= N <= 10^12`

**Output Format**
In ra số lượng sổ sách mua được kèm theo 1 số lời dẫn và dấu chấm than. Xem output để rõ hơn yêu cầu.

**Sample Input 0**
```
142 43
```
**Sample Output 0**
```
SO VO MUA DUOC LA : 3 !!!!!
```
**Sample Input 1**
```
487 12
```
**Sample Output 1**
```
SO VO MUA DUOC LA : 40 !!!!!
```

---

## [Làm quen với OJ]. Bài 16. Cout
**Problem | Submissions | Discussions**

Bài tập này rất đơn giản, bạn được yêu cầu nhập vào 4 số `x, y, z, t` và in ra theo mẫu.
* Dòng 1: in ra `x, y, z, t` mỗi số cách nhau 2 khoảng trắng.
* Dòng 2: in ra `y, z, x, t` mỗi số cách nhau 2 dấu gạch giữa.
* Dòng 3: in ra `2*x, 3*y, 4*z, 5*t` cách nhau 1 dấu phẩy.
* Dòng 4: in ra `"KET THUC !!"`

Giữa các dòng có 1 dòng trống. Chú ý in ra đúng thứ tự đề bài yêu cầu.

**Input Format**
1 dòng duy nhất chứa 4 số nguyên `x, y, z, t` viết cách nhau 10 dấu cách (Thực ra thì C++ nó bỏ qua tất cả mọi dấu cách nên 10 hay 1 dấu cách thì bạn vẫn nhập như bình thường)

**Constraints**
`1 <= x, y, z, t <= 10^9`

**Output Format**
In ra kết quả của bài toán

**Sample Input 0**
```
8 9 2 10
```
**Sample Output 0**
```
8  9  2  10
9--2--8--10
16,27,8,50

KET THUC !!
```

---

## [Làm quen với OJ]. Bài 17. Chu vi và diện tích HCN
**Problem | Submissions | Discussions**

Nhập vào chiều dài và chiều rộng của HCN bạn hãy in ra chu vi và diện tích của HCN đó theo yêu cầu. 
Chú ý tính diện tích có thể bị tràn.

**Input Format**
* 1 dòng duy nhất gồm chiều dài và chiều rộng

**Constraints**
* Chiều dài, rộng là số nguyên dương không quá `10^6`

**Output Format**
In ra chu vi, diện tích theo mẫu

**Sample Input 0**
```
39 22
```
**Sample Output 0**
```
Chu vi HCN la : 122
Dien tich HCN la : 858
```

---

## [Làm quen với OJ]. Bài 18. Hoán vị giá trị 2 số
**Problem | Submissions | Discussions**

Cho 2 số nguyên `a, b`, bạn hãy hoán đổi giá trị 2 số `a` và `b` sau đó tính giá trị biểu thức `128 * a + 97 * b + 1000` in ra màn hình. Để hoán đổi giá trị `a, b` bạn có thể dùng `swap(a, b)` hoặc dùng biến tạm như sau: `int tmp = a; a = b; b = tmp;`

**Input Format**
* Dòng duy nhất gồm 2 số `a, b`

**Constraints**
`0 <= a, b <= 10^9`

**Output Format**
In ra kết quả của biểu thức sau khi hoán đổi giá trị `a, b`.

**Sample Input 0**
```
12 16
```
**Sample Output 0**
```
4212
```

---

## [Làm quen với OJ]. Bài 19. Phần thập phân
**Problem | Submissions | Discussions**

Cho số thực `F`, nhiệm vụ của bạn hãy in ra phần thực và phần nguyên của `F`

**Input Format**
Dòng duy nhất chứa số thực `F`

**Constraints**
`-10^6 <= F <= 10^6`

**Output Format**
* Dòng 1 in ra phần nguyên.
* Dòng 2 in ra phần thực với 2 số sau dấu phẩy.

**Sample Input 0**
```
9.73
```
**Sample Output 0**
```
9
0.73
```

---

## [Làm quen với OJ]. Bài 20. Cout 2
**Problem | Submissions | Discussions**

Cho số `N`, bạn hãy in ra số `N` với 6 chữ số, nếu `N` không đủ 6 chữ số thì tiến hành chèn `0` và dấu `#` vào đầu cho đủ 6 chữ số.

**Gợi ý:** dùng `cout << setw(K) << setfill(kí tự) << N << endl;`
Trong đó `K` là độ rộng số chữ số bạn muốn in ra, thêm thư viện chứa `setw` và `setfill`. Tìm kiếm google nếu cần thiết: `setfill function library c++`

**Input Format**
Dòng duy nhất chứa số `N`

**Constraints**
`0 <= N < 10^6`

**Output Format**
* Dòng 1 in ra `N` với số `0` được chèn vào trước
* Dòng 2 in ra `N` với dấu `#` được chèn vào trước

**Sample Input 0**
```
850
```
**Sample Output 0**
```
000850
###850
```
