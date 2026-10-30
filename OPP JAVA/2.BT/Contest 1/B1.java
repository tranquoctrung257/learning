import java.util.Scanner;

public class B1{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long x = sc.nextLong();
        long a = (int)Math.pow(x,3) + 3*(int)Math.pow(x,2) + x + 1;
        System.out.println(a);
    }
}