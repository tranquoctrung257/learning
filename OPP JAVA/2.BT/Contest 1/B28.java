
import java.util.Scanner;

public class B28{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long  n = sc.nextLong(), u1 = sc.nextLong(),d = sc.nextLong();
        long  un = u1 + (n-1)*d;
        long  sn = (n * (u1+un)) / 2;
        System.out.println(sn);
    }
}