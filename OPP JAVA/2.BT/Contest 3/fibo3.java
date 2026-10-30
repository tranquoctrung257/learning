import java.util.Scanner;

public class fibo3 {
    public static long fibo(long n){
        if(n == 1) return 1;
        long fn1 = 1, fn2 = 0;
        for(int i = 3; i <= 92;i++){
            long fn = fn1 + fn2;
            if(fn >= n) return fn;
            fn2 = fn1;fn1 = fn;
        }
        return -1;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long n = sc.nextLong();
        System.out.println(fibo(n));
    }
}