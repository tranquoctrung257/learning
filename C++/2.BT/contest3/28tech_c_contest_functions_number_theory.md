# [28TECH LẬP TRÌNH C++] CONTEST 4. HÀM, LÝ THUYẾT SỐ

---



## 2___ [Hàm, Lý Thuyết Số]. Luyện tập viết hàm 2 (Quan trọng)

### Problem
Cho số nguyên không âm $N$, bạn hãy viết 10 hàm tương ứng để in ra kết quả, in ra `1` hoặc `0` cho mỗi yêu cầu.
(Mã nguồn tham khảo Java: [https://ideone.com/t8Gcmd](https://ideone.com/t8Gcmd))

1. Số lượng chữ số chẵn của $n$ là một số lẻ.
2. $N$ có số lượng chữ số chẵn > số lượng chữ số lẻ.
3. $N$ có chữ số đầu bằng chữ số cuối.
4. Tổng chữ số của $N$ có tận cùng là `8`.
5. Tổng chữ số của $N$ là số nguyên tố.
6. Các chữ số đứng cạnh nhau của $n$ chênh lệch nhau đúng 1 đơn vị (số có 1 chữ số thỏa mãn).
7. $N$ có chữ số đầu tiên lớn hơn tất cả các chữ số còn lại của nó, (số có 1 chữ số thỏa mãn).
8. $N$ có tổng chữ số là một số trong dãy fibonacci.
9. $N$ có tổng chữ số là một số thuận nghịch.
10. $N$ chỉ bao gồm các chữ số `0`, `6` hoặc `8`.

### Input Format
- Dòng 1 là $T$: số bộ test.
- $T$ dòng tiếp theo mỗi dòng là số tự nhiên $N$.

### Constraints
$1 \le T \le 1000$
$0 \le N \le 10^{18}$

### Output Format
- Đối với mỗi test in ra 10 dòng tương ứng với kết quả của 10 yêu cầu trên, mỗi test cách nhau 1 dòng trống.

### Sample Input 0
```
1
87654418
```

### Sample Output 0
```
1
1
1
0
1
0
0
0
1
0
```

---





















# [Hàm bổ sung]. Bài 1. Số ước nguyên tố

**Problem | Submissions | Discussions**

Bạn hãy đếm xem số $N$ có bao nhiêu ước là số nguyên tố khác nhau. 
*Gợi ý:* Hãy đếm $N$ có bao nhiêu thừa số nguyên tố khác nhau.

### Input Format
* Dòng duy nhất chứa số nguyên dương $N$

### Constraints
* $1 \le N \le 10^{12}$

### Output Format
* In ra số lượng ước là số nguyên tố của $N$

---

### Sample Input 0
```
96
```

### Sample Output 0
```
2
```

---

# [Hàm bổ sung]. Bài 2. Thừa số nguyên tố có số mũ lớn nhất

**Problem | Submissions | Discussions**

Bạn hãy tìm thừa số nguyên tố có số mũ lớn nhất của số nguyên $N$, nếu có nhiều thừa số nguyên tố có cùng số mũ lớn nhất hãy chọn số nhỏ hơn. Ví dụ $N = 60 = 2^2 \times 3^1 \times 5^1$ thì đáp án sẽ là $2$.

### Input Format
* Dòng duy nhất chứa số nguyên dương $N$

### Constraints
* $2 \le N \le 10^{12}$

### Output Format
* In ra thừa số nguyên tố kèm với số mũ

---

### Sample Input 0
```
88
```

### Sample Output 0
```
23
```

---

# [Hàm bổ sung]. Bài 3. Phân tích thừa số nguyên tố

**Problem | Submissions | Discussions**

Cho số nguyên dương $N$ bạn hãy phân tích thừa số nguyên tố theo các cách sau:
* **Cách 1:** Chỉ in ra các thừa số nguyên tố khác nhau của $N$ mỗi thừa số 1 lần
* **Cách 2:** In ra các thừa số nguyên tố kèm theo số mũ
* **Cách 3:** In ra các thừa số nguyên tố

### Input Format
* Dòng duy nhất chứa số nguyên dương $N$

### Constraints
* $2 \le N \le 10^6$

### Output Format
* In ra 3 dòng theo yêu cầu

---

### Sample Input 0
```
120
```

### Sample Output 0
```
2 3 5
(2, 3) (3, 1) (5, 1)
2 x 2 x 2 x 3 x 5
```

---





# [Hàm bổ sung]. Bài 6. Tổng chia dư

**Problem | Submissions | Discussions**

Cho $N$ số nguyên, bạn hãy tính tổng các số này và chia dư tổng cho $10^9 + 7$ ($1000000007$).

### Input Format
* Dòng 1 là $N$: số lượng số nguyên
* Dòng 2 gồm $N$ số nguyên cách nhau 1 khoảng trắng

### Constraints
* $1 \le N \le 10^5$
* Các số là nguyên dương không quá $10^{16}$

### Output Format
* In ra đáp án của bài toán

---

### Sample Input 0
```
5
534 7 669 826 610
```

### Sample Output 0
```
2646
```

---

# [Hàm bổ sung]. Bài 7. Tích chia dư

**Problem | Submissions | Discussions**

Cho $N$ số nguyên, bạn hãy tính tích các số này và chia dư tổng cho $10^9 + 7$ ($1000000007$).

### Input Format
* Dòng 1 là $N$: số lượng số nguyên
* Dòng 2 gồm $N$ số nguyên cách nhau 1 khoảng trắng

### Constraints
* $1 \le N \le 10^5$
* Các số là nguyên dương không quá $10^6$

### Output Format
* In ra đáp án của bài toán

---

### Sample Input 0
```
5
153 747 236 481 789
```

### Sample Output 0
```
373224432
```

---

# [Hàm bổ sung]. Bài 8. Giai thừa

**Problem | Submissions | Discussions**

Hãy tính giai thừa các số từ 1 tới $N$ và chia dư cho $10^9 + 7$.

### Input Format
* Dòng duy nhất chứa số nguyên dương $N$

### Constraints
* $1 \le N \le 10^6$

### Output Format
* In ra $N$ dòng tương ứng với giai thừa các số từ 1 tới $N$ sau khi chia dư

---

### Sample Input 0
```
5
```

### Sample Output 0
```
1
2
6
24
120
```

---

# [Hàm bổ sung]. Bài 9. Chữ số cuối cùng

**Problem | Submissions | Discussions**

Tìm $K$ chữ số cuối cùng của $N^M$, kết quả có thể không đủ $K$ chữ số. Ví dụ $9^5 = 59049$ và $K = 3$ thì bạn chỉ cần in ra $49$.

### Input Format
* 3 số $N, M, K$

### Constraints
* $1 \le N, M \le 10^6$
* $1 \le K \le 9$

### Output Format
* In ra đáp án của bài toán

---

### Sample Input 0
```
9 8 1
```

### Sample Output 0
```
1
```

---

# [Hàm bổ sung]. Bài 10. Dãy số 23

**Problem | Submissions | Discussions**

Dãy số 23 được định nghĩa như sau: $F(1) = 1$, $F(2) = 1$, $F_n = 2 \times F(n-1) + 3 \times F(n-2)$. Một số đầu tiên trong dãy số: $1, 1, 5, 13, 41, \dots$ Hãy tính số thứ $n$ trong dãy số 23 chia dư cho $10^9 + 7$.

### Input Format
* Dòng duy nhất chứa số nguyên dương $n$

### Constraints
* $1 \le n \le 10^6$

### Output Format
* In ra đáp án của bài toán

---

### Sample Input 0
```
6
```

### Sample Output 0
```
121
```

---


# [Hàm, Lý Thuyết Số]. Fibonacci 3

**Problem | Submissions | Discussions**

Nhiệm vụ của bạn là hãy tìm số thuộc dãy số Fibonacci nhỏ nhất lớn hơn hoặc bằng số $N$ đã cho. Biết một số đầu tiên trong dãy Fibonacci là: $1, 1, 2, 3, 5, 8, 13, \dots$

### Input Format
* Dòng duy nhất chứa số nguyên dương $N$

### Constraints
* $1 \le N \le 10^{18}$

### Output Format
* In ra số Fibonacci nhỏ nhất lớn hơn hoặc bằng $N$

---

### Sample Input 0
```
12
```

### Sample Output 0
```
13
```

---

# [Hàm, Lý Thuyết Số]. Fibonacci 4

**Problem | Submissions | Discussions**

Liệt kê những số là số nguyên tố nhỏ hơn $N$ và có tổng các chữ số của nó là một số trong dãy số Fibonacci.

### Input Format
* Dòng duy nhất chứa số nguyên dương $N$

### Constraints
* $1 \le N \le 10000$

### Output Format
* In ra các số nhỏ hơn $N$ là số nguyên tố và thỏa mãn tổng chữ số của nó là một số trong dãy Fibonacci. Các số in cách nhau một khoảng trắng.

---

### Sample Input 0
```
114
```

### Sample Output 0
```
2 3 5 11 17 23 41 53 67 71 101 107 113
```

---

# [Hàm, Lý Thuyết Số]. Fibonacci 5

**Problem | Submissions | Discussions**

Kiểm tra một số có phải là số Fibonacci hay không, bạn phải trả lời nhiều trường hợp trong bài toán này.

### Input Format
* Dòng đầu tiên là số lượng bộ test $T$.
* $T$ dòng tiếp theo mỗi dòng là một số nguyên dương $N_i$.

### Constraints
* $1 \le T \le 100$
* $1 \le N \le 10^{18}$

### Output Format
* Đối với mỗi test case in kết quả trên một dòng, nếu là số Fibonacci in `YES`, ngược lại in `NO`.

---

### Sample Input 0
```
5
89
754
399
34
661
```

### Sample Output 0
```
YES
NO
NO
YES
NO
```