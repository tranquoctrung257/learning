# VÒNG LẶP (LOOP)


## Đặt vấn đề
**Bài toán:** Hãy viết chương trình in ra 1000 dòng "Hello World!".
Nếu sử dụng 1000 dòng lệnh `cout`, điều này tốn rất nhiều thời gian và là **KHÔNG KHẢ THI**. 
Giải pháp tối ưu cho những tác vụ lặp đi lặp lại như vậy chính là sử dụng **VÒNG LẶP**.

---

## 1. VÒNG LẶP FOR

### Cú pháp
```cpp
for ([Câu lệnh khởi tạo]; [Điều kiện lặp]; [Câu lệnh cập nhật]) {
    // Code bên trong vòng lặp for
}
```

### Thành phần
Vòng lặp `for` gồm 3 phần chính, các phần được phân cách nhau bằng dấu chấm phẩy `;`:
*   **Phần 1 - Câu lệnh khởi tạo:** Thường là khai báo và khởi tạo một biến có nhiệm vụ làm biến đếm cho vòng for (ví dụ: `i`, `j`, `k`).
*   **Phần 2 - Điều kiện lặp:** Chừng nào giá trị của điều kiện lặp còn có giá trị `true` thì vòng for còn tiếp tục chạy.
*   **Phần 3 - Cập nhật biến đếm:** Thường phần này sẽ thay đổi giá trị của biến đếm sau khi các câu lệnh ở bên trong vòng lặp for được thực hiện xong.

### Cách sử dụng
Vòng lặp `for` được sử dụng nhiều nhất, và thường được sử dụng khi **biết trước số vòng lặp** cần thực hiện. 
*Lưu ý:* Vòng `for` không nhất thiết phải có đủ cả 3 phần, nhưng **phải luôn có đủ 2 dấu `;`** để phân cách giữa 3 phần.

### Ví dụ
| Code | Output | Giải thích |
| :--- | :--- | :--- |
| `for(int i = 1; i <= 1000; i++) { cout << i << endl; }` | 1 <br> 2 <br> ... <br> 1000 | In các số từ 1 đến 1000 |
| `for(int i = 1; i <= 10; i += 2) { cout << i << ' '; }` | 1 3 5 7 9 | In các số lẻ từ 1 đến 9 |
| `for(int i = 1; ; i++) { cout << i << ' '; }` | | Vòng lặp vĩnh viễn in ra các số tự nhiên bắt đầu từ 1 |
| `int i = 1; for(; i <= 100; i++) { cout << i << endl; }` | 1 <br> ... <br> 100 | Bỏ trống phần khởi tạo |
| `for(int i = 1; i <= 10;) { cout << i << ' '; }` | 1 1 1... | Vòng lặp in ra vô hạn các số 1 (do thiếu phần cập nhật biến) |
| `for(; i <= 10; i++) { cout << i << endl; }` | Lỗi | Compilation error (nếu `i` chưa được khai báo trước đó) |

### Lệnh Break và Continue
*   **Lệnh `break`:** Khi muốn dừng vòng lặp for với một điều kiện cho trước ta dùng câu lệnh `break`. Khi gặp `break`, vòng for sẽ kết thúc ngay lập tức.
    ```cpp
    for ([Câu lệnh khởi tạo]; [Điều kiện lặp] ; [Câu lệnh cập nhật]) {
        // Các câu lệnh trước break
        if (condition) {
            break; // Thực thi khi condition là true, thoát khỏi vòng lặp
        }
        // Nhóm câu lệnh sau break
    }
    ```
*   **Lệnh `continue`:** Khi muốn bỏ qua phần còn lại của vòng lặp hiện tại và chuyển sang vòng lặp (iteration) mới luôn. Nhóm câu lệnh đứng sau `continue` sẽ không được thực hiện trong lần lặp đó.
    ```cpp
    for ([Câu lệnh khởi tạo]; [Điều kiện lặp] ; [Câu lệnh cập nhật]) {
        // Các câu lệnh trước continue
        if (condition) {
            continue; // Bỏ qua các lệnh phía dưới, tiến hành cập nhật và lặp vòng mới
        }
        // Nhóm câu lệnh sau continue (không được chạy nếu gặp continue)
    }
    ```

---

## 2. VÒNG LẶP WHILE

### Cú pháp
```cpp
while ([Điều kiện lặp]) {
    // Các câu lệnh của vòng lặp
}
```

### Cách sử dụng
*   **Hoạt động:** Khi điều kiện lặp còn đúng thì vòng while còn tiếp tục hoạt động và các câu lệnh bên trong thân vòng lặp sẽ tiếp tục được thực hiện.
*   **Sử dụng khi nào:** Vòng lặp `while` được sử dụng khi **chưa xác định được** số vòng lặp cần thực hiện.
*   **Lỗi thường gặp:** Vòng lặp bị lặp vĩnh viễn (vô hạn) do không có câu lệnh cập nhật làm sai điều kiện lặp.

### Ví dụ
| Code | Output | Giải thích |
| :--- | :--- | :--- |
| `int i = 1;`<br>`while(i <= 5) {`<br>&nbsp;&nbsp;`cout << i << endl;`<br>&nbsp;&nbsp;`++i;`<br>`}` | 1<br>2<br>3<br>4<br>5 | In các số từ 1 đến 5 |
| `while(true) { cout << "28tech" << endl; }` | 28tech<br>28tech<br>... | In ra vô hạn dòng 28tech |
| `int i = 1; while(i <= 5) { cout << i << endl; }` | 1<br>1<br>1... | In ra vô hạn số 1 |
| `int n = 1234;`<br>`while(n != 0) {`<br>&nbsp;&nbsp;`cout << n % 10 << endl;`<br>&nbsp;&nbsp;`n /= 10;`<br>`}` | 4<br>3<br>2<br>1 | Tách và in từng chữ số từ hàng đơn vị trở đi |
| `int n = 1234, sum = 0;`<br>`while(n != 0) {`<br>&nbsp;&nbsp;`sum += n % 10;`<br>&nbsp;&nbsp;`n /= 10;`<br>`}`<br>`cout << sum << endl;` | 10 | Tính tổng các chữ số của `n` |

---

## 3. VÒNG LẶP DO WHILE

### Cú pháp
```cpp
do {
    // Code trong vòng lặp
} while ([Điều kiện lặp]);
```

### Cách sử dụng
*   **Hoạt động:** Tương tự như vòng lặp `while` nhưng có một chút sự khác biệt: vòng lặp `do while` **luôn thực thi code bên trong vòng lặp 1 lần đầu tiên**, sau đó mới kiểm tra điều kiện lặp.
*   **Sử dụng khi nào:** Cũng được sử dụng khi chưa xác định được số vòng lặp cần thực hiện, nhưng bạn cần khối lệnh thực thi ít nhất một lần.
*   **Lỗi thường gặp:** Thiếu dấu chấm phẩy `;` ở đằng sau `while(...)`.

### Ví dụ
| Code | Output | Giải thích |
| :--- | :--- | :--- |
| `int i = 100;`<br>`do {`<br>&nbsp;&nbsp;`cout << i << endl;`<br>`} while(i < 100);` | 100 | Mặc dù `i < 100` là sai ngay từ đầu, vòng lặp vẫn chạy lần đầu tiên và in ra 100. |
| `int i = 1;`<br>`do {`<br>&nbsp;&nbsp;`cout << i << endl;`<br>&nbsp;&nbsp;`i++;` *(Cần thêm lệnh này để giống output)* <br>`} while(i <= 5);` | 1<br>2<br>3<br>4<br>5 | Chạy giống while thông thường nếu điều kiện đúng |