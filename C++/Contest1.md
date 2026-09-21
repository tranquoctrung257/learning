# Cấu trúc rẽ nhánh (Kiểu dữ liệu - IF ELSE)

---

## Bài 1. Tính toán giá trị của biểu thức

Cho biểu thức $A(x) = x^3 + 3x^2 + x + 1$. Với giá trị của $x$ được nhập từ bàn phím, tính và in ra giá trị của biểu thức trên.

### Input Format
Số nguyên $x$.

### Constraints
$-10^5 \le x \le 10^5$

### Output Format
In ra kết quả của biểu thức.

### Sample Input 0
```
2
```

### Sample Output 0
```
23
```

---

## Bài 2. Tính toán giá trị biểu thức 2

**Yêu cầu:** Cho ba số nguyên $a, b$ và $c$, hãy tính $S = a \times (b + c) + b \times (a + c)$.

### Input Format
3 số $a, b, c$ trên 1 dòng.

### Constraints
$-10^8 \le a, b, c \le 10^8$

### Output Format
In ra giá trị của biểu thức.

### Sample Input 0
```
1 2 3
```

### Sample Output 0
```
13
```

---

## Bài 3. Tổng, hiệu, tích, thương

Nhập vào 2 số nguyên, in ra tổng, hiệu, tích, thương (lấy độ chính xác với 4 chữ số sau dấu phẩy) của 2 số đó.

*Lưu ý:* Cần chú ý xử lý tràn số khi tính tích và trường hợp chia cho 0.

### Input Format
2 số nguyên $a, b$ trên 1 dòng.

### Constraints
$-10^8 \le a, b \le 10^8$

### Output Format
In ra tổng, hiệu, tích, thương trên từng dòng. Nếu trường hợp không thể tìm được thương của 2 số (chia cho 0) thì in ra `"INVALID"` cho dòng kết quả của thương.

### Sample Input 0
```
7769 0
```

### Sample Output 0
```
7769
7769
0
INVALID
```

### Sample Input 1
```
9794 1282
```

### Sample Output 1
```
11076
8512
12555908
7.6396
```

---

## Bài 4. Chu vi và diện tích hình tròn

Cho bán kính $R$ của hình tròn. Yêu cầu tính chu vi và diện tích của hình tròn đó. Lấy $\pi = 3.14$.

Công thức:
- Chu vi: $C = 2 \times \pi \times R$
- Diện tích: $S = \pi \times R \times R$

### Input Format
1 dòng chứa bán kính $R$ là số nguyên dương.

### Constraints
$1 \le R \le 1000$

### Output Format
In ra chu vi và diện tích trên 1 dòng, kết quả lấy độ chính xác 4 số sau dấu phẩy.

### Sample Input 0
```
10
```

### Sample Output 0
```
62.8000 314.0000
```

---

## [Kiểu dữ liệu-IF ELSE]. Bài 5. Khoảng cách Euclid

Có nhiều khoảng cách giữa 2 điểm trong hệ tọa độ ví dụ như khoảng cách Manhattan, Euclid, Minkowski. Nhưng trong chương trình toán phổ thông các bạn sử dụng nhiều nhất là khoảng cách Euclid. Vì vậy bạn hãy tính khoảng cách Euclid giữa 2 điểm trong hệ tọa độ Oxy.

### Input Format
Tọa độ của 2 điểm $(x_1, y_1)$ và $(x_2, y_2)$ là các số nguyên.

### Constraints
$-10^6 \le x_i, y_i \le 10^6$

### Output Format
In ra khoảng cách giữa 2 điểm, lấy độ chính xác 2 số sau dấu phẩy.

### Sample Input 0
```
1 4 4 8
```

### Sample Output 0
```
5.00
```

---
## [Kiểu dữ liệu-IF ELSE]. Bài 6. Đổi nhiệt độ

Công thức chuyển đơn vị đo nhiệt độ từ C sang F như sau: 

$$F = \frac{C \times 9}{5} + 32$$

Viết chương trình cho phép nhập vào nhiệt độ đo theo độ C là số nguyên không âm không quá $10^6$, thực hiện chuyển sang đơn vị đo độ F và in ra màn hình. *(Lưu ý luôn lấy 2 chữ số thập phân sau dấu phẩy)*.

### Input Format
Nhiệt độ ở độ C là một số nguyên không âm.

### Constraints
$0 \le n \le 10^6$

### Output Format
Kết quả đổi từ độ C sang độ F.

### Sample Input 0
```
24
```

### Sample Output 0
```
75.20
```

---

## [Kiểu dữ liệu-IF ELSE]. Bài 7. Số lớn nhất và nhỏ nhất

Cho 2 số nguyên $a$ và $b$. Bạn hãy tìm 2 số sau:
- Số thứ 1: là số lớn nhất $\le a$ mà chia hết cho $b$.
- Số thứ 2: là số nhỏ nhất $\ge a$ mà chia hết cho $b$.

*Chú ý:* Không được dùng vòng lặp.
- Gợi ý công thức:
  - Số thứ 1: `a / b * b`
  - Số thứ 2: `(a + b - 1) / b * b` (hoặc kiểm tra `if (a % b == 0)` thì là `a`, ngược lại `(a / b + 1) * b`).
  - Các phép chia đều là chia nguyên.

### Input Format
1 dòng chứa 2 số $a, b$.

### Constraints
$1 \le a, b \le 10^6$

### Output Format
- Dòng 1: in ra số thứ 1 cần tìm.
- Dòng 2: in ra số thứ 2 cần tìm.

### Sample Input 0
```
717 689
```

### Sample Output 0
```
689
1378
```

---

## [Kiểu dữ liệu-IF ELSE]. Bài 8. Luyện tập viết câu điều kiện

Cho một số nguyên không âm $N$. Bạn hãy thực hiện viết câu lệnh để kiểm tra các điều kiện sau:
1. $N$ có phải là số chẵn? (Kiểm tra số dư của $N$ với 2 và so sánh với 0)
2. $N$ có phải là số vừa chia hết cho 3 vừa chia hết cho 5? (Kết hợp 2 điều kiện sử dụng `&&`)
3. $N$ có phải là số chia hết cho 3 nhưng không chia hết cho 7? (Kết hợp 2 điều kiện sử dụng `&&`)
4. $N$ có phải là số chia hết cho 3 hoặc 7? (Kết hợp 2 điều kiện sử dụng `||`)
5. $N$ là số lớn hơn 30 và nhỏ hơn 50? (Kết hợp 2 điều kiện sử dụng `&&`)
6. $N$ có phải là số không nhỏ hơn 30 và chia hết cho ít nhất một trong 3 số 2, 3, 5?
7. $N$ có phải là số có 2 chữ số có chữ số tận cùng là một số nguyên tố? ($10 \le N \le 99$, kiểm tra chữ số tận cùng là 2, 3, 5, 7)
8. $N$ có phải là số không vượt quá 100 và chia hết cho 23?
9. $N$ không thuộc đoạn $[10, 20]$?
10. $N$ có chữ số tận cùng là bội số của 3?


### Input Format
Số nguyên dương $N$.

### Constraints
$1 \le N \le 10^6$

### Output Format
In ra 10 dòng, mỗi dòng là `"YES"` hoặc `"NO"` tương ứng với 10 điều kiện. Nếu $N$ thỏa mãn điều kiện thứ $i$ thì dòng $i$ in ra `YES`, ngược lại in ra `NO`.

### Sample Input 0
```
263
```

### Sample Output 0
```
NO
NO
NO
NO
NO
NO
NO
NO
YES
YES
```

---

## [Kiểu dữ liệu-IF ELSE]. Bài 9. Kiểm tra năm nhuận

Năm nhuận là năm chia hết cho 400 hoặc (chia hết cho 4 và không chia hết cho 100). Nhập vào $N$ là một năm và kiểm tra xem $N$ có phải là năm nhuận hay không?

### Input Format
Số nguyên dương $N$.

### Constraints
$1 \le N \le 5000$

### Output Format
In ra `YES` nếu $N$ là năm nhuận, ngược lại in ra `NO`.

### Sample Input 0
```
2020
```

### Sample Output 0
```
YES
```

---

## [Kiểu dữ liệu-IF ELSE]. Bài 10. Tam giác hợp lệ

Cho 3 cạnh $a, b, c$ là độ dài 3 cạnh của tam giác, kiểm tra xem $a, b, c$ có thể tạo thành một tam giác hợp lệ hay không?

*Gợi ý:* Tam giác hợp lệ là tam giác có 3 cạnh đều dương và tổng hai cạnh bất kỳ luôn lớn hơn cạnh còn lại:
$$a > 0, b > 0, c > 0 \quad \text{và} \quad a + b > c, a + c > b, b + c > a$$

### Input Format
1 dòng chứa 3 số $a, b, c$.

### Constraints
$-10^6 \le a, b, c \le 10^6$

### Output Format
In ra `YES` nếu $a, b, c$ là 3 cạnh của 1 tam giác hợp lệ, ngược lại in ra `NO`.

### Sample Input 0
```
3 4 5
```

### Sample Output 0
```
YES
```

---

## [Kiểu dữ liệu-IF ELSE]. Bài 11. Kiểm tra tam giác

Cho 3 cạnh $a, b, c$ của một tam giác:
- Nếu tam giác đã cho là tam giác đều thì in ra `1`.
- Tam giác cân thì in ra `2`.
- Tam giác vuông thì in ra `3`.
- Tam giác thường in ra `4`.
- Trường hợp không tạo thành tam giác hợp lệ thì in ra `"INVALID"`.

### Input Format
1 dòng chứa 3 số $a, b, c$.

### Constraints
$0 \le a, b, c \le 10^3$

### Output Format
In ra kết quả tương ứng.

### Sample Input 0
```
8 8 8
```

### Sample Output 0
```
1
```

### Sample Input 1
```
8 8 6
```

### Sample Output 1
```
2
```

---

## [Kiểu dữ liệu-IF ELSE]. Bài 12. Số ngày của tháng

Cho biết tháng và năm, hãy in ra số ngày tương ứng có trong tháng đó. Chú ý tháng 2 của năm nhuận có 29 ngày.

### Input Format
2 số nguyên $t$ và $n$ tương ứng với tháng và năm.

### Constraints
$0 \le t \le 100$; $0 \le n \le 5000$

### Output Format
Nếu tháng hợp lệ ($1 \le t \le 12$) và năm hợp lệ ($n > 0$) thì in ra số ngày tương ứng của tháng đó trong năm, ngược lại in ra `"INVALID"`.

### Sample Input 0
```
11 2021
```

### Sample Output 0
```
30
```

---

## [Kiểu dữ liệu-IF ELSE]. Bài 13. Đổi ngày sang năm, tuần, ngày

Cho trước $N$ ngày, hãy đổi $N$ thành số năm, số tuần và số ngày. Biết rằng một năm có 365 ngày.

### Input Format
Số nguyên không âm $N$.

### Constraints
$0 \le N \le 10^6$

### Output Format
In ra số năm, tuần, ngày tương ứng với $N$ ngày (cách nhau một khoảng trắng).

### Sample Input 0
```
373
```

### Sample Output 0
```
1 1 1
```

---

## [Kiểu dữ liệu-IF ELSE]. Bài 14. Kiểm tra chữ cái

Cho một kí tự, bạn hãy kiểm tra kí tự nhập vào:
- Chữ cái in hoa: in ra `"UPPER"`
- Chữ cái in thường: in ra `"LOWER"`
- Chữ số: in ra `"DIGIT"`
- Kí tự đặc biệt (không phải chữ cái và chữ số): in ra `"SPECIAL"`

### Input Format
1 dòng chứa kí tự $c$.

### Constraints
$c$ là chữ in hoa, in thường, chữ số hoặc kí tự đặc biệt.

### Output Format
In ra kết quả phân loại tương ứng.

### Sample Input 0
```
Z
```

### Sample Output 0
```
UPPER
```

---

## [Kiểu dữ liệu-IF ELSE]. Bài 15. Chuyển đổi in hoa in thường

Cho kí tự $c$:
- Nếu $c$ là chữ cái in thường thì chuyển thành chữ cái in hoa tương ứng.
- Nếu $c$ là chữ cái in hoa thì chuyển thành chữ cái in thường tương ứng.
- Nếu không phải chữ cái thì giữ nguyên không đổi.

### Input Format
1 dòng chứa kí tự $c$.

### Constraints
$c$ có thể là chữ in hoa, in thường, chữ số hoặc kí tự đặc biệt.

### Output Format
In ra kết quả theo yêu cầu.

### Sample Input 0
```
e
```

### Sample Output 0
```
E
```

### Sample Input 1
```
$
```

### Sample Output 1
```
$
```

---
## [Kiểu dữ liệu-IF ELSE]. Bài 16. Kí tự kế tiếp

Cho kí tự $c$ là chữ cái in hoa hoặc in thường, in ra kí tự kế tiếp sau nó trong bảng chữ cái ở dạng **in thường**. Kí tự kế tiếp của chữ `Z` (hoặc `z`) được coi là chữ `a`.

### Input Format
1 dòng chứa kí tự $c$.

### Constraints
$c$ là chữ cái in hoa hoặc in thường.

### Output Format
In ra chữ cái kế tiếp ở dạng in thường.

### Sample Input 0
```
A
```

### Sample Output 0
```
b
```

### Sample Input 1
```
z
```

### Sample Output 1
```
a
```

---

## [Kiểu dữ liệu-IF ELSE]. Bài 17. Xếp loại học sinh

**Yêu cầu:** Cho biết điểm kiểm tra Tin học của 1 em học sinh (2 con điểm hệ số 1, 1 con điểm hệ số 2, 1 con điểm hệ số 3). In ra kết quả học tập môn Tin học của em đó theo quy tắc:
- Điểm trung bình $\ge 8$: Giỏi (`GIOI`)
- $\ge 6.5$ và $< 8$: Khá (`KHA`)
- $\ge 5$ và $< 6.5$: Trung Bình (`TRUNG BINH`)
- $< 5$: Yếu (`YEU`)

### Input Format
Một dòng chứa 4 số điểm của học sinh (hệ số 1, hệ số 1, hệ số 2, hệ số 3).

### Constraints
Điểm là số thực từ $0$ tới $10$.

### Output Format
Kết quả học tập môn Tin học ở dạng in hoa không dấu.

### Sample Input 0
```
9 8 7 8.5
```

### Sample Output 0
```
GIOI
```

### Sample Input 1
```
5 7 6.5 5
```

### Sample Output 1
```
TRUNG BINH
```

---

## [Kiểu dữ liệu-IF ELSE]. Bài 18. Domino

Bạn được cung cấp một bảng hình chữ nhật kích thước $M \times N$ hình vuông đơn vị, và không giới hạn các thanh domino kích thước $2 \times 1$. Bạn được phép xoay thanh domino. Tìm số lượng domino tối đa có thể đặt lên bảng sao cho:
1. Mỗi domino bao trùm đúng 2 ô vuông đơn vị.
2. Các domino không đè lên nhau.
3. Mỗi domino nằm trọn vẹn trong bảng.

### Input Format
2 số nguyên dương $M$ và $N$.

### Constraints
$1 \le M, N \le 10^9$

### Output Format
In ra số thanh domino tối đa có thể đặt.

### Sample Input 0
```
3 3
```

### Sample Output 0
```
4
```

### Sample Input 1
```
2 4
```

### Sample Output 1
```
4
```

## [Kiểu dữ liệu-IF ELSE]. Bài 19. Lát đá quảng trường

Quảng trường Nhà hát ở thủ đô Berland có hình chữ nhật kích thước $n \times m$ mét. Nhân dịp kỷ niệm thành phố, người ta quyết định lát quảng trường bằng những viên đá granit hình vuông kích thước $a \times a$.

Các viên đá không được phá vỡ và các cạnh phải song song với cạnh của quảng trường. Phần đá được phép phủ vượt ra ngoài diện tích quảng trường. Tìm số lượng viên đá tối thiểu cần dùng.

### Input Format
3 số nguyên dương $n, m, a$.

### Constraints
$1 \le n, m, a \le 10^9$

### Output Format
Viết số lượng viên đá cần thiết để lát kín quảng trường.

### Sample Input 0
```
6 6 4
```

### Sample Output 0
```
4
```

---

## [Kiểu dữ liệu-IF ELSE]. Bài 20. Frog

Một con ếch hiện đang ở điểm 0 trên trục tọa độ $Ox$. Thuật toán nhảy của nó như sau:
- Bước nhảy lẻ (1, 3, 5,...): nhảy $a$ đơn vị sang phải ($+a$).
- Bước nhảy chẵn (2, 4, 6,...): nhảy $b$ đơn vị sang trái ($-b$).

Hãy tính tọa độ của con ếch sau $k$ bước nhảy.

### Input Format
3 số nguyên $a, b, k$ trên cùng một dòng.

### Constraints
$1 \le a, b, k \le 10^9$

### Output Format
Vị trí của con ếch sau $k$ bước nhảy.

### Sample Input 0
```
5 2 3
```

### Sample Output 0
```
8
```

---

## [Kiểu dữ liệu-IF ELSE]. Bài 21. Mua nước

28tech muốn nấu một món súp. Để làm điều đó, anh ta cần mua chính xác $n$ lít nước. Chỉ có hai loại chai nước trong cửa hàng gần đó: chai 1 lít và chai 2 lít (số lượng mỗi loại không giới hạn). Chai loại thứ nhất có giá $a$ burles và chai loại thứ hai có giá $b$ burles.

Nhiệm vụ của bạn là tìm ra số tiền tối thiểu (bằng burles) để mua chính xác $n$ lít nước.

### Input Format
3 số nguyên $n, a, b$.

### Constraints
$1 \le n \le 10^{12}$; $1 \le a, b \le 1000$

### Output Format
Số tiền ít nhất để mua được đúng $n$ lít nước.

### Sample Input 0
```
10 1 3
```

### Sample Output 0
```
10
```

---

## [Kiểu dữ liệu-IF ELSE]. Bài 22. Đồng xu

Bạn có vô hạn các đồng xu có mệnh giá từ $1, 2, 3, \dots, n$. Bạn muốn chọn một số đồng xu sao cho tổng giá trị đúng bằng $S$. Tìm số lượng đồng xu tối thiểu cần dùng.

### Input Format
Dòng duy nhất chứa hai số nguyên $n$ và $S$.

### Constraints
$1 \le n \le 10^6$; $1 \le S \le 10^{12}$

### Output Format
In ra một số nguyên duy nhất là số lượng xu tối thiểu cần thiết để đạt tổng $S$.

### Sample Input 0
```
5 11
```

### Sample Output 0
```
3
```

---

## [Kiểu dữ liệu-IF ELSE]. Bài 23. Doremon leo cầu thang

Doremon muốn leo lên một cầu thang gồm $n$ bậc. Mỗi lần di chuyển anh ta có thể leo 1 hoặc 2 bậc. Doremon muốn tổng số bước di chuyển phải là bội số của một số nguyên $m$. 

Hãy tìm số bước di chuyển tối thiểu thỏa mãn yêu cầu trên. Nếu không có cách nào leo lên thỏa mãn điều kiện thì in ra `-1`.

### Input Format
Dòng đơn chứa hai số nguyên cách nhau $n, m$.

### Constraints
$1 \le n, m \le 10^9$

### Output Format
Số lượng bước di chuyển tối thiểu là bội số của $m$. Nếu không thể đạt được thì in `-1`.

### Sample Input 0
```
10 2
```

### Sample Output 0
```
6
```

---
## [Kiểu dữ liệu-IF ELSE]. Bài 24. Đường đi ngắn nhất

Patrick cần đi từ nhà mình ghé thăm cả 2 cửa hàng gần nhà và sau đó quay trở về nhà:
- Độ dài đường từ nhà đến cửa hàng 1: $d_1$
- Độ dài đường từ nhà đến cửa hàng 2: $d_2$
- Độ dài đường nối trực tiếp giữa 2 cửa hàng: $d_3$

Patrick có thể đi lại trên một con đường hoặc ghé lại một cửa hàng nhiều lần. Hãy tính quãng đường ngắn nhất mà Patrick cần đi bộ.

### Input Format
Ba số nguyên $d_1, d_2, d_3$ trên một dòng.

### Constraints
$1 \le d_1, d_2, d_3 \le 10^8$

### Output Format
In khoảng cách tối thiểu Patrick phải đi bộ để ghé thăm cả hai cửa hàng và trở về nhà.

### Sample Input 0
```
832 56 273
```

### Sample Output 0
```
658
```

---

## [Kiểu dữ liệu-IF ELSE]. Bài 25. Đổi tiền

28tech có $n$ đô la trong tài khoản ngân hàng và muốn rút toàn bộ thành tiền mặt. Các mệnh giá có sẵn là: $100, 20, 10, 5, 1$. 

Hỏi số tờ tiền tối thiểu nhận được sau khi rút toàn bộ $n$ đô la là bao nhiêu?

### Input Format
Số nguyên dương $n$.

### Constraints
$1 \le n \le 10^9$

### Output Format
Số tờ tiền tối thiểu để đổi được $n$ đô la.

### Sample Input 0
```
3455
```

### Sample Output 0
```
38
```

---

## [Kiểu dữ liệu-IF ELSE]. Bài 26. Số lớn nhất nhỏ nhất trong 4 số

Cho 4 số nguyên $a, b, c, d$. Hãy tìm số lớn nhất và số nhỏ nhất trong 4 số này.

### Input Format
4 số $a, b, c, d$ viết trên 1 dòng, cách nhau bởi một dấu cách.

### Constraints
$1 \le a, b, c, d \le 10^{18}$

### Output Format
In ra số lớn nhất và nhỏ nhất (cách nhau một khoảng trắng).

### Sample Input 0
```
546 272 839 508
```

### Sample Output 0
```
839 272
```

---

## [Kiểu dữ liệu-IF ELSE]. Bài 27. Làm tròn số

Cho một số thực $a$, hãy tìm số nguyên gần $a$ nhất. Trong trường hợp phần thập phân của $a = 0.5$ thì làm tròn lên.

### Input Format
Số thực $a$.

### Constraints
$0 \le a \le 10^6$

### Output Format
Số nguyên gần với $a$ nhất.

### Sample Input 0
```
15.2
```

### Sample Output 0
```
15
```

---

## [Kiểu dữ liệu-IF ELSE]. Bài 28. Cấp số cộng

Cho cấp số cộng có $n$ phần tử, biết phần tử đầu tiên là $u_1$ và công sai là $d$. Hãy tính tổng các phần tử của cấp số cộng này:

$$S_n = \frac{n \times [2u_1 + (n - 1)d]}{2}$$

### Input Format
1 dòng chứa 3 số $n, u_1, d$.

### Constraints
$2 \le n \le 10000$; $1 \le u_1, d \le 10^6$

### Output Format
In ra tổng của cấp số cộng.

### Sample Input 0
```
3646 662 114
```

### Sample Output 0
```
759924842
```

---
## [Kiểu dữ liệu-IF ELSE]. Bài 29. Cấp số nhân

Cho 4 số $a, b, c, d$. Hãy kiểm tra xem 4 số này theo thứ tự có tạo thành một cấp số nhân với công bội nguyên hay không.

### Input Format
1 dòng chứa 4 số $a, b, c, d$.

### Constraints
$1 \le a, b, c, d \le 10^6$

### Output Format
In ra `YES` nếu 4 số tạo thành cấp số nhân, ngược lại in ra `NO`.

### Sample Input 0
```
92 92 92 92
```

### Sample Output 0
```
YES
```

---

## [Kiểu dữ liệu-IF ELSE]. Bài 30. Tổ hợp chập 2

Trong lớp có $N$ sinh viên, muốn chọn ra 2 bạn sinh viên để tham gia cuộc thi khiêu vũ. Hỏi có bao nhiêu cách chọn?

$$C_N^2 = \frac{N(N - 1)}{2}$$

### Input Format
Số lượng sinh viên trong lớp $N$.

### Constraints
$1 \le N \le 10^6$

### Output Format
In ra kết quả của bài toán.

### Sample Input 0
```
4
```

### Sample Output 0
```
6
```

---

## [Kiểu dữ liệu-IF ELSE]. Bài 31. 

Bizon the Champion được gọi là Champion vì một lý do. Bizon the Champion gần đây đã có một món quà - một tủ kính mới với $n$ kệ và anh quyết định đặt tất cả những món quà của mình ở đó. Tất cả các món quà có thể được chia thành hai loại: huy chương và cúp. Bizon the Champion có $a1$ cúp giải nhất, $a2$ cúp giải nhì và $a3$ cúp giải ba. Bên cạnh đó, anh có $b1$ huy chương giải nhất, $b2$ huy chương giải nhì và $b3$ huy chương giải ba. Đương nhiên, phần thưởng trong tủ phải sắp xếp cho thật đẹp, đó là lý do Bizon the Champion quyết định tuân theo các quy tắc: bất kỳ kệ nào cũng không thể chứa cả cúp và huy chương cùng một lúc; không có kệ có thể chứa nhiều hơn năm cúp; không có kệ có thể có hơn mười huy chương. Giúp Bizon the Champion tìm hiểu xem chúng tôi có thể đặt tất cả các phần thưởng để tất cả các điều kiện được đáp ứng hay không.

### Input Format

Dòng đầu tiên chứa các số nguyên $a1$, $a2$ và $a3$. Dòng thứ hai chứa các số nguyên $b1$, $b2$ và $b3$ ($0 \le b1, b2, b3 \le 100$). Dòng thứ ba chứa số nguyên $n$. Các số trong các dòng được phân tách bằng khoảng trắng đơn.

### Constraints

$0 \le a1, a2, a3 \le 100$; $1 \le n \le 100$;

### Output Format

In "YES" (không có dấu ngoặc kép) nếu tất cả các phần thưởng có thể được đưa lên kệ theo cách được mô tả. Nếu không, hãy in "NO" (không có dấu ngoặc kép).

### Sample Input 0

```text
46 76 52 40 60 67
11
```

___
## [Kiểu dữ liệu-IF ELSE]. Bài 32. Ghép số

Gần đây Anton tìm thấy một hộp có chữ số trong phòng của mình. Có $k2$ chữ số $2$, $k3$ chữ số $3$, $k5$ chữ số $5$ và $k6$ chữ số $6$. Số nguyên yêu thích của Anton là $32$ và $256$. Anh quyết định soạn số nguyên này từ các chữ số anh có. Anh ta muốn làm cho tổng của các số nguyên này càng lớn càng tốt. Giúp anh ta giải quyết nhiệm vụ này! Mỗi chữ số có thể được sử dụng không quá một lần, tức là các số nguyên tổng hợp nên chứa không quá $k2$ chữ số $2$, $k3$ chữ số $3$, v.v. Tất nhiên, các chữ số không sử dụng không được tính vào tổng.

### Input Format

Dòng duy nhất của đầu vào chứa bốn số nguyên $k2$, $k3$, $k5$ và $k6$ - số chữ số $2$, $3$, $5$ và $6$ tương ứng.

### Constraints

$0 \le k2, k3, k5, k6 \le 10^9$.

### Output Format

In một số nguyên - tổng số tối đa có thể có của các số nguyên yêu thích của Anton có thể được tạo bằng các chữ số từ hộp.

### Sample Input 0

```
5 1 3 4
```

### Sample Output 0

```
800
```
## [Kiểu dữ liệu-IF ELSE]. Bài 33. Chia tiền

Polycarp có ba chị em: Alice, Barbara và Cerene. Họ đang thu thập tiền xu. Hiện tại, Alice có một đồng tiền, Barbara có tiền xu và Cerene có tiền xu. Gần đây Polycarp đã trở về từ chuyến đi vòng quanh thế giới và mang theo $n$ xu. Anh ta muốn phân phối tất cả $n$ xu này giữa các chị em của mình theo cách mà số lượng tiền Alice có bằng số lượng tiền mà Barbara có và bằng với số lượng tiền mà Cerene có. Nói cách khác, nếu Polycarp đưa $A$ xu cho Alice, $B$ xu cho Barbara và $C$ xu cho Cerene ($A + B + C = n$), thì $a + A = b + B = c + C$. Lưu ý rằng $A$, $B$ hoặc $C$ (số lượng tiền mà Polycarp đưa cho Alice, Barbara và Cerene tương ứng) có thể là $0$. Nhiệm vụ của bạn là tìm hiểu xem có thể phân phối tất cả $n$ xu giữa các chị em theo cách được mô tả ở trên không.

### Input Format

4 số nguyên trên 1 dòng $a$, $b$, $c$, $n$.

### Constraints

$1 \le a, b, c, n \le 10^8$

### Output Format

In "YES" nếu Polycarp có thể phân phối tất cả $n$ xu giữa các chị em của mình và "NO" nếu không.

### Sample Input 0

```
5 3 2 8

```

### Sample Output 0

```
NO

```
---

## [Kiểu dữ liệu-IF ELSE]. Bài 35. HPNY

Năm mới sắp đến và bạn rất hào hứng muốn biết còn lại bao nhiêu phút trước Tết. Bạn biết rằng hiện tại đồng hồ hiển thị $h$ giờ và $m$ phút, trong đó $0 \le hh < 24$ và $0 \le mm < 60$. Chúng tôi sử dụng định dạng thời gian 24 giờ! Nhiệm vụ của bạn là tìm số phút trước Tết. Bạn biết rằng năm mới đến khi đồng hồ hiển thị 0 giờ và 0 phút.

### Input Format

2 số nguyên không âm $h$ và $m$.

### Constraints

$0 \le h < 24$; $0 \le m < 60$;

### Output Format

In ra đáp án của bài toán

### Sample Input 0

```
23 0

```

### Sample Output 0

```
60
```