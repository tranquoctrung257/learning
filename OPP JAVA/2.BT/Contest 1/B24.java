
import java.util.Scanner;

public class B24{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int d1 = sc.nextInt(),d2 = sc.nextInt(),d3 = sc.nextInt(); 
        int kc1 = d1 + d2 + d3;
        int kc2 = 2*(d1 + d2);
        int kc3 = 2*(d2 + d3);
        int kc4 = 2*(d1 + d3);
        System.out.println(Math.min(kc1,Math.min(kc2,Math.min(kc3,kc4))));
        
    }
}