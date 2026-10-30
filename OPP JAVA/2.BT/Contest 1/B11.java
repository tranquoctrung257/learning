
import java.util.Scanner;

public class B11{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt(), b = sc.nextInt(),c = sc.nextInt();
        if(a > 0 || b > 0 || c > 0 || a+ b > 0 || a + c > 0 || b + c == 0){
            if(a == b && b == c ) System.out.println("1");
            else if(a == b || a == c || b == c) System.out.println("2");
            else if(a*a == b*b+c*c || b*b == a*a+c*c || c*c == a*a + b*b) System.out.println("3");
            else System.out.println("4");
        }
        else System.out.println("INVALID");
    }
}