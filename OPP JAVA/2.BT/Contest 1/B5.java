
import java.util.Scanner;


public class B5{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x1 = sc.nextInt(),y1 = sc.nextInt(),x2 = sc.nextInt(),y2 = sc.nextInt();
        double x = (Math.sqrt(Math.pow(x2 - x1,2) + Math.pow(y2 - y1,2)));
        System.out.printf("%.2f",x);
    }
}