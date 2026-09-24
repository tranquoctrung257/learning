
import java.util.Scanner;


public class luu_y_nextline {
    public static void main(String[] args) {
        //        1 lưu ý khi dùng nextLine
        //        123
        //        456/n
        Scanner sc = new Scanner(System.in);
//        int x = sc.nextInt();
//        String a = sc.nextLine();
//        String b = sc.nextLine();
//        System.out.println(x);
//        System.out.println(a);
//        System.out.println(b);
        /* nếu chạy thì chưa nhập cái thứ 3 chương trình đã kết thúc rồi
        123
        12tech
        
        kq in ra
        X:1312
        a:
        b:28tech
        
        ở đây nó sẽ nhận kq của a là dấu xuống dòng \n thì điều đấy người ta gọi là trôi lệnh tôi đang mong muốn ở hàm dưới mà ông lại quên mất ở dòng dưới rồi mà hóa ra đang ở dòng trên thì để giải quyết trôi lệnh đó thì thêm sc.nextLine ở trên 1 lần nữa.
        coi như giả vờ đọc dấu cách đấy
        
        123/n nextInt(token) chỉ đọc 123 thôi
        còn nextLine sẽ đọc từ \n 
        */
//        String c = sc.nextLine(); ở đây nếu chọn next line thì sẽ đọc cả dòng và có cả dấu cách còn
        String c = sc.next(); // nó chỉ đọc 1 kí tự đầu(1 token) 
        System.out.println(c); // token là cái liền liền nhau không dấu tab hay dấu cách đại loại là không có khoảng trống
//      lưu ý thêm 1 cái nữa trong thư viện math thường xuyên trả về double
    }
}
