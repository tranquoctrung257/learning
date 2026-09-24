import java.util.Scanner;

public class B2{
	 public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
			int n = sc.nextInt();
			long tong = 0;
			for(int i = 1;i<= n;i++){
				tong += Math.pow(i,2);
			}
			System.out.println(tong);
	}
}
