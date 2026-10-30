
import java.util.Scanner;

public class B6{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long n = sc.nextLong();
        long tonguoc = 0;
        for(int i = 1; i <= Math.sqrt(n);i++){
            if (n%i==0){
                tonguoc += i;
                if(n%i !=i) tonguoc+= n/i;
            }
        }
        System.out.println(tonguoc);
    }
}