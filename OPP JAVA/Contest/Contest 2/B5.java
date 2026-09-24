import java.util.Scanner;

public class B5{
	 public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		double s = 0.0;
		for(int i = 1; i <= n*2;i++){
			if(i%2==0){
				s += 1.0/i;
			}
		}
		System.out.printf("%.5f",s);
	 }
}