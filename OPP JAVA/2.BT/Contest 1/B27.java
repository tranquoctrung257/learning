
import java.util.Scanner;

public class B27{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        double a = sc.nextDouble();
        if((a - (long)a) >= 0.5)System.out.println((long)a+1);
        else System.out.println((long)a);
    }
}