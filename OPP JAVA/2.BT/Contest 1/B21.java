import java.util.Scanner;
public class B21{
	public static void main(String[] args) {
            Scanner sc = new Scanner(System.in);
            int a = sc.nextInt(),b = sc.nextInt(), k = sc.nextInt();
            int trai = 0, phai = 0;
            if(k % 2 == 0) trai = phai = k /2;
            else trai = k /2; phai = trai +1;
            System.out.println(1l * phai * a - 1l * trai * b);
	}
}