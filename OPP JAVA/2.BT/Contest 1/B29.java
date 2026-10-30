
import java.util.Scanner;

public class B29{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int a = sc.nextInt(),b = sc.nextInt(), c= sc.nextInt(), d = sc.nextInt();
        int q = b/a;
        if(b*q == c && c*q == d )System.out.println("YES");
        else System.out.println("NO");
    }
}