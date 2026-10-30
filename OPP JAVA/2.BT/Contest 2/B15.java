
import java.util.Scanner;

public class B15{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        long tong = 1;
        for(int i = 1; i <= n;i++){
            tong *= i;
        }
        System.out.println(tong);
    }
}