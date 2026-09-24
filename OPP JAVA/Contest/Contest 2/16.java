
import java.util.Scanner;

public class B16{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long n = sc.nextLong();
        int dem = 0;
        while(n != 0){
            dem++;
            n/=10;
        }
        System.out.println(dem);
    }
}