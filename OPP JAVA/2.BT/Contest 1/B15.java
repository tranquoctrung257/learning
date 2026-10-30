
import java.util.Scanner;

public class B15{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long n = sc.nextLong(), a = sc.nextLong(), b = sc.nextLong();
        if(a*2 > b){
            if(n % 2 == 0)System.out.println(n/2*b);
            else System.out.println((n-1)/2*b+a); // n phải trừ 1 vì chỉ có mua chẵn chai
        }
        else System.out.println(a*n);
    }
}