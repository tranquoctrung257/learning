
import java.util.Scanner;

public class B11{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long tong = 0;
        int n = sc.nextInt();
        
        for(int i = 1; i <= n;i++){
            if(i % 2 == 0){
                tong += i;
            }
            else tong -=i;
        }
        System.out.println(tong);
    }
}