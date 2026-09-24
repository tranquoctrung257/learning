
import java.util.Scanner;

public class B17{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long n = sc.nextLong();
        int dem = 0;
        while(n!=0){
            long r = n % 10;
            if(r == 2 || r == 3 || r == 5 || r == 7){
                dem++;
            }
            n/=10;
        }
        System.out.println(dem);
    }
}