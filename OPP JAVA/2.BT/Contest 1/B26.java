
import java.util.Scanner;

public class B26{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long a = sc.nextLong(), b = sc.nextLong(), c = sc.nextLong(), d = sc.nextLong();
        System.out.print(Math.max(a,Math.max(b,Math.max(c,d))));
        System.out.print(" ");
        System.out.print(Math.min(a,Math.min(b,Math.min(c,d))));
        
    }
}