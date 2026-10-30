
import java.util.Scanner;

public class B25{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long n = sc.nextLong();
        long e = n / 100;
        long d = (n - (e*100))/ 20;
        long c = (n - ((e*100) + (d*20)))/10;
        long b = (n - ((e*100) + (d*20) + c*10))/5;
        long a = n - ((e*100) + (d*20) + (c*10) + (b*5));
        System.out.println(a+b+c+d+e);
    }
}