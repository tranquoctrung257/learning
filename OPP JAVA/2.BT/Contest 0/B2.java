// print number
//import java.util.*; là lấy hết các hàm trong hàm util

import java.util.Scanner;
// trước nextLine() mà xuất hiện 1 cái khác nextLine() là sẽ bị trôi dòng còn nextLine thì sẽ không bị

public class B2{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        long x = sc.nextInt(); // tại sao đây lại là nextInt nghĩa là nhập vào xâu kí tự nó sẽ ép sang kiểu Int
        long y = sc.nextLong();
        
        sc.nextLine();// trước nextLine mà đặt cái không phải nextLine thì sẽ xẩy ra việc tràn số, nếu trước nextLine mà đặt nextLine thì không vấn đề gì cả
        char c = sc.nextLine().charAt(0); // giống c[0]
        float f = sc.nextFloat();
        double d = sc.nextDouble(); // nếu không hiện gợi ý thì ấn ctrl dấu cách
        
        System.out.println(x + "\n" + y + "\n" + c);
        System.out.printf("%.2f\n",f);
        System.out.printf("%.9f",d);
        
    }
}