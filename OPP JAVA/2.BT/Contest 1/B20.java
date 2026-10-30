import java.util.Scanner;
public class B20{
	public static void main(String[] args) {
            Scanner sc = new Scanner(System.in);
            int n = sc.nextInt(), m = sc.nextInt(),a = sc.nextInt();
            int x = 0, y = 0;
            if(n % a == 0) x = n / a;
            else x = n / a + 1;
            
            if(m % a == 0) y = m / a;
            else y = m / a + 1;
            System.out.println(1l * x * y);

    }
}