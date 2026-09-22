import java.util.Scanner;

public class B6{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();	
		// 1
		if(n % 2 == 0){
			System.out.println("YES");
		} 
		else System.out.println("NO");

		// 2
		if((n % 3 == 0) && (n % 5 == 0)){
			System.out.println("YES");
		} 
		else System.out.println("NO");

		// 3
		if((n % 3 == 0) && (n % 7 != 0)){
			System.out.println("YES");
		} 
		else System.out.println("NO");

		// 4

		if((n % 3 == 0) || (n % 7 == 0)){
			System.out.println("YES");
		} 
		else System.out.println("NO");

		// 5
		if((n > 30 ) && (n < 50)){
			System.out.println("YES");
		} 
		else System.out.println("NO");


		    // 6. N có phải là số không nhỏ hơn 30 và chia hết cho ít nhất một trong 3 số 2, 3, 5? (Lớn hơn hoặc bằng 30 && (chia hết ....
	    if((n >= 30) && (n % 2 == 0 || n % 3 == 0 || n % 5 == 0)){
			System.out.println("YES");
		} 
		else System.out.println("NO");


	    int r = n%10;
	    // 7. N có phải là số có 2 chữ số có chữ tận cùng là một số nguyên tố? (>= 10, <= 99, kiểm tra chữ số tận cùng là 2, 3, 5, 7)
	    if((n >= 10 && n <= 99) && (r == 2 || r == 3 || r == 5 || r == 7 )){
			System.out.println("YES");
		} 
		else System.out.println("NO");


	    // 8. N có phải là số không vượt quá 100 và chia hết cho 23?
	    if(n <= 100 && n % 23 == 0){
			System.out.println("YES");
		} 
		else System.out.println("NO");


	    // 9. N không thuộc đoạn [10, 20]?
	    if(n < 10 || n > 20){
			System.out.println("YES");
		} 
		else System.out.println("NO");


	    // 10. N có chữ số tận cùng là bội số của 3?
	    if(r % 3 == 0){
			System.out.println("YES");
		} 
		else System.out.println("NO");
		}
}