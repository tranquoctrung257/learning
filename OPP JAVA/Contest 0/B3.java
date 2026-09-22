
import java.util.Scanner;

public class B3 {
    public static void main(String[] args) {
        int x,y,z,t;
        Scanner sc = new Scanner(System.in);
        x = sc.nextInt();y = sc.nextInt();z = sc.nextInt();t = sc.nextInt();
        System.out.println(y + "," + z + "," + x + "," + t);
         // cộng tổng 4 cái lại có thể bị tràn số nên cần phải ép kiểu
        System.out.println((long)x+y+z+t); // ép 1 thằng thôi vì ép tất cả thì sai vì đã tràn rồi thì ép kiểu nó vẫn tràn thôi
        System.out.println(x-y+(long)z*t);
        
    }
}
