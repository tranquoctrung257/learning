import java.util.Scanner;
public class B23{
	public static void main(String[] args) {
            Scanner sc = new Scanner(System.in);
            int n = sc.nextInt(),m = sc.nextInt();
            int min = 0, max = n;
            if(n % 2 == 0){
                min = n / 2;
            }
            else{
                min = n / 2 + 1;
            }
            // tìm số nhỏ nhất >= min chia hết cho m
            int res = (min + m - 1) / m * m;
            if(res <= max )System.out.println(res);
            else System.out.println("-1");
	}
}