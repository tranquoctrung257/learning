
import java.util.Scanner;

public class B22{
    public static boolean cp(long n){
        long can = (long)Math.sqrt(n);
        
        return can * can == n;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long a = sc.nextLong(),b = sc.nextLong();
        
        int L = (int)Math.sqrt(a);
        if(!cp(a)) L++;
        
        int R = (int)Math.sqrt(b);
        System.out.println(R - L +1);
    }
}