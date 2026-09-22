
import java.util.Scanner;

public class B10{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long a = sc.nextLong(),b = sc.nextLong(), c = sc.nextLong();
        if(a > 0 && b > 0 && c > 0 && a + b > c && a + c > 0 && b + c > a){
            System.out.println("YES");
        }
        else System.out.println("NO");
        
    }
}