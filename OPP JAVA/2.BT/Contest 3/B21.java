
import java.util.Scanner;

public class B21{
    
    public static boolean cp(long n){
        long can = (long)Math.sqrt(n);
        return can * can == n;
    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long a = sc.nextLong(), b = sc.nextLong();
        
        int L = (int)Math.sqrt(a); //kiểm tra a có phải chính phương hay không 
        if(!cp(a)) L++;
        
        int R = (int)Math.sqrt(b);
        for(int i = L; i<= R;i++){
            System.out.println((long)i*i + " ");
        }
    }
}