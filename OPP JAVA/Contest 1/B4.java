
import java.util.Scanner;

public class B4{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int r = sc.nextInt();
        double PI = 3.14;
        System.out.printf("%.4f",2 * PI * r);
        System.out.print(" ");
        System.out.printf("%.4f",PI * r * r);
    }
}