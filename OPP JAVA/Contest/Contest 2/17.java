
import java.util.Scanner;

public class B17{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long n = sc.nextLong();
        long tong = 0;
        while(n!=0){
            tong += n % 10;
            n/=10;
        }
        System.out.println(tong);
    }
}