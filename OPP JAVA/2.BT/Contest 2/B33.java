import java.util.Scanner;

public class B33 {

    public static void ve(int n){
        for(int i = 1; i <= n;i++){
            for(int j = 1; j < n+1-i;j++){
                System.out.print("  ");
            }
            for(int j = n+1-i; j <= i+n-1;j++){
                System.out.print("* ");
            }
            System.out.println("");
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        ve(n);
    }
}