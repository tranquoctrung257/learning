
import java.util.Scanner;

public class B8{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long a = sc.nextInt(), b = sc.nextInt();
        System.out.println(a+b);
        System.out.println(a-b);
        System.out.println(a*b);
        if(a == 0 || b == 0){
            System.out.println("INVALID");
        }
        else System.out.printf("%.4f",(double)a/b);
    }
}