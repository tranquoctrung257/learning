
import java.util.Scanner;

public class B9{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        long tong = 1;
        
        for(int i = 1; i <= n;i++){
            if(n % i == 0) tong *= i;
        }
        System.out.println(tong);
    };
}