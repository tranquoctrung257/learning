
import java.util.Scanner;

public class B10{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        boolean check = false;
        for(int i = 1; i <= n; i++){
            int N = sc.nextInt();
            if(N == 2022){
                check = true;
            }
        }
        if(check)System.out.println("YES");
        else System.out.println("NO");
    }
}